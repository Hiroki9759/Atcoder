#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100]={0},counter=0,flag=0;
ll k,ans;
set<ll>se;
queue<ll>que;
void bfs(ll step){
    que.push(step);
    ll m;
    while(!que.empty()){
        m=que.front();que.pop();
        //cout<<m<<"\n";
        for(int i=0;i<=9;i++){
            if(abs(i-m%10)<=1||m==0){
                if(m*10+i!=0){
                que.push(m*10+i);
                counter++;
                }
            }
            if(counter==k){
                ans=m*10+i;
                return;
            }
        }
    }
}
int main(){
    cin>>k;
    counter=0;
    bfs(0);
    cout<<ans;
    return 0;
}
