#include <iostream>
using namespace std;

//爬一个或者两个台阶，输入 1 <= n < 90 的数字为台阶数，以输入 0 作为结束标志，输出n个台阶共有多少种上楼方式.
//使用动态规划的方式
//走第x层楼梯的时候，最后一步有两种情况：走了一层或者走了两层
//所以有递推关系：f(x)=f(x-1)+f(x-2)
int main(){
    int f1=1,f2=2;
    int num,sum=0;
    cin>>num;
    for(int i=3;i<=num;i++){
        sum=f1+f2;
        f1=f2;
        f2=sum;
    }
    if(num==1){
        sum=1;
    }
    if(num==2){
        sum=2;
    }
    cout<<sum<<endl;
    return 0;
}