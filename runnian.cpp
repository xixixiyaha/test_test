#include <iostream>
using namespace std;
// “判断从1990到2010年中的瑞年？并打印(1、能整除4且不能整除100 2、能整除400)
int main(){
    int year;
    cin>>year;
    int flag =0;
    if((year%4==0&&year%100!=0)||(year%400==0)){
        flag=1;
    }
    if(flag==1){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}