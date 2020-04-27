#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    ll N;
    scanf("%lld",&N);
    ll A[N+1]={0},cnt[N+1]={0};
    
    for (ll i = 1; i < N; i++)
    {
        
        //A[i]:i-1人目
        scanf("%lld",&A[i]);
        cnt[A[i]]++;

    }
    for(int i =1;i<=N;i++){
        printf("%lld\n",cnt[i]);
    }
    
    
    
    return 0;
}