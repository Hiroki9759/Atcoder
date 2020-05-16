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
    ll n;
    ll Darkness[1000001]={0};
    cin >> n;
    vector<pair<ll,ll>> AB;
    ll a,b;
    REP(i,n){
        cin >> a >> b;
        Darkness[a]++;Darkness[b+1]--;
    }
    ll ans = Darkness[0];
    for(ll i = 1;i<=1000000;i++){
        Darkness[i]+=Darkness[i-1];
        ans = max(ans,Darkness[i]);
    }
    
    cout << ans << endl;
    return 0;

}