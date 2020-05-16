#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    ll n,X,ans=0;
    cin >> n >> X;
    vector<ll>A(n);
    REP(i,n)cin>> A[i];
    for (int k = 0; k < n; k++)
    {
        if(X>>k&1){
           ans += A[k];
        }
    }
    cout << ans << endl;

    return 0;
}