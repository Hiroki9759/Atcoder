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
int main(){
    ll N,card,ans=0;
    scanf("%lld",&N);
    vector<ll> dp(N,INF);
    ll data[1<<18];
    REP(i,N) scanf("%d",&data[i]);
    REP(i,N){
        *lower_bound(dp.begin(),dp.end(),data[i]) = data[i];
    }
    ll LIS = lower_bound(dp.begin(),dp.end(),INF)-dp.begin();
    printf("%lld\n",N-LIS);
    return 0;
}