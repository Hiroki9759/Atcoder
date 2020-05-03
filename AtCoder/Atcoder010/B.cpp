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
    ll n;cin >> n;
    ll a,ans = 0;
    REP(i,n){
        cin >> a;
        switch(a%6){
        case 2: ans += 1;  break;
        case 4: ans += 1; break;
        case 5: ans += 2; break;
        case 0: ans += 3; break;
        }
    }
    cout << ans << endl;

    return 0;

}