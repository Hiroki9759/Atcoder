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
    ll N;
    cin >> N;
    vector<ll>S(N);
    REP(i,N)cin >> S[i];
    ll q;
    cin >> q;
    ll t,ans=0;
    REP(i,q){
        cin>>t;
        REP(i,N){
            if(S[i]==t){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}