#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

int R,C,s,t,u,v,a[]={0,1,0,-1,0},i;
char M[55][55];

queue<int>Q;
int main(){
    //for文の最初は初期化　
    for(cin>>R>>C>>s>>t>>u>>v;i<R;)cin>>M[i++];
    vector<vector<int>>A(R,vector<int>(C,-1));
    A[--s][--t]=0;
    Q.push(s*99+t);
    while(!Q.empty()){
    auto p=Q.front();Q.pop();
    C=p/99,R=p%99;
    for(i=0;i<4;)if(A[s=C+a[i++]][t=R+a[i+1]]<0&M[s][t]=='.')A[s][t]=A[C][R]+1,Q.push(s*99+t);
    }
    cout<<A[u-1][v-1]<<'\n';

        return 0;
}
