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
    ll N,M;
    ll a,sum,b;

    vector<ll> A;
    scanf("%lld%lld",&N,&M);
    for(ll i=0;i<M;i++){
        scanf("%lld",&a);
        sum += a;
    }
    b= -1;
    if(sum > N) printf("%lld",b);
    else printf("%lld",N-sum);
    return 0;

}