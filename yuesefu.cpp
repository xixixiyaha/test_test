#include<iostream>
#include<queue>
#include<stdio.h>
using namespace std;
//使用队列进行循环，首先将各个数字加入队列，然后将k-1个元素从队首移动到队尾，这样要要移除的第k个就在队首了，将这个移除就好了。
int main(){
    int k,n;
    cin>>n;
    cin>>k;
    queue<int> q;
    for(int  i=1;i<=n;i++){
        q.emplace(i);
    }
    while(q.size()>1){
        for(int i=1;i<k;i++){
            q.emplace(q.front());
            q.pop();
        }
        q.pop();
    }
    cout<<q.front()<<endl;
    return 0;

}