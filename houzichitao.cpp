#include <iostream>
using namespace std;

int main(){
    int sum = 1;
    int N;
    cin>>N;
    for(int i=1;i<N;i++){
        sum=2*sum+2;
    }
    cout<<sum<<endl;
    return 0;
}