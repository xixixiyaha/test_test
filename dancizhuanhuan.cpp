#include <iostream>
using namespace std;

// “输入几个单词，将字母变换成另外一组单词输出？如果字母是i，则变换后的字母是26+i-1
int main(){
    char a[100];
    int n=0;
    cin.getline(a,100);
    while(a[n]!='\0'){
        if(a[n]>= 'a'&&a[n]<='z'){
            a[n]='z'-(a[n]-'a');
        }
        if(a[n]>= 'A'&&a[n]<='Z'){
            a[n]='Z'-(a[n]-'A');
        }
        n++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    return 0;

}