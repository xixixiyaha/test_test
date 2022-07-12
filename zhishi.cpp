#include <iostream>
using namespace std;
// 1.判断一个数是不是素数？”（质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数。自然数，表示物体个数的数0、1、2、3、4、5、6、……叫自然数。）
int judge(int n){
    int flag=0;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    return flag;
}

int main(){
    int n;
    cin>>n;
    int flag;
    flag = judge(n);
    if(flag==1){
        cout<<"yes!"<<endl;
    }else{
        cout<<"no!"<<endl;
    }
    return 0;
}