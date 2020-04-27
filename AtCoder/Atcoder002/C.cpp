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
    ll a[6];
    REP(i,6){scanf("%lld",&a[i]);}
    a[2] -= a[0]; a[3] -= a[1];
    a[4] -= a[0]; a[5] -= a[1];
    float S = abs(a[2]*a[5]-a[3]*a[4]);
    S/= 2.0;
    printf("%.1f\n",S);
    return 0;
}