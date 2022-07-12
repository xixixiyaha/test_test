#include <iostream>
using namespace std;

int main(){
    int a[10];
    int min=100000, max=0,index_min,index_max,temp;
    for(int i=0; i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        if(a[i]<min){
            min=a[i];
            index_min=i;
        }
        if(a[i]>max){
            max=a[i];
            index_max=i;
        }
    }
    temp=a[0];
    a[0]=a[index_min];
    a[index_min]=temp;
    temp=a[9];
    a[9]=a[index_max];
    a[index_max]=temp;
    for(int i=0; i<10;i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
    return 0;

}