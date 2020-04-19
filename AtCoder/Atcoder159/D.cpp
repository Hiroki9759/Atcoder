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
    ll N=0,sum=0;
    scanf("%lld",&N);
    pair<set<int>,int> s;
    ll cnt[N+1]= {0},array[N] ={0};
    for (ll i = 0; i < N; i++)
    {
        scanf("%lld",array+i);
        cnt[array[i]]++;
    }
    for (ll i = 1; i <= N; i++)
    {
        sum += cnt[i]*(cnt[i]-1)/2;
    }

    for(ll j = 0;j<N;j++){
        ll before =cnt[array[j]];
        ll after = before -1;
        printf("%lld\n",sum-before*(before-1)/2+after*(after-1)/2);
    }
    return 0;
}