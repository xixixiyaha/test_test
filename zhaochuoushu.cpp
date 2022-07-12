#include <iostream>
using namespace std;

// 找出正整数中偶数，并输出相加后的数，要用 long.
int main(){
    long num;
    int tail,head,sum=0;
    cin>>num;
    while(num>9){
        tail=num%10;
        num=num/10;
        if(tail%2==0){
            sum = sum+tail;
        }
    }
    if(num<10){
        if(num%2==0){
            sum+=num;
        }
    }
    cout<<sum<<endl;
    return 0;

}