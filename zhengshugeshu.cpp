#include <iostream>
using namespace std;

// 输入 n 和 b , 找出 1 到 n 中被 b 整除的个数.
int main(){
    int n,b;
    int sum =0;
    cout<<"in:";
    cin>>n;
    cout<<"in:";
    cin>>b;
    for(int i=1;i<=n;i++){
        if(b%i==0){
            sum++;
            // cout<<i<<endl;
        }
    }
    cout<<sum<<endl;
    return 0;
}