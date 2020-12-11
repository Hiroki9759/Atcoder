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
    vector<pair<long long,long long>>D(3);
    for (long long  i = 0; i < 3; i++)
    {
        long long temp;
        cin>>temp;
        D[i]={temp,i};
    }
    sort(D.rbegin(),D.rend());
    vector<long long> ans(3);
    for (long long i = 0; i < 3; i++)
    {
        ans[D[i].second] = i+1;
    }
    for(int i=0;i<3;i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}

// int main() {
//   vector<pair<ll,ll>> a(3);
//   for(ll i=0;i<3;i++) {
//     ll tmp;
//     cin >> tmp;
//     a[i]={tmp,i};
//   }
//   sort(a.rbegin(),a.rend());
//   vector<ll> ans(3);
//   for(ll i=0;i<3;i++) {
//     ans[a[i].second]=i+1;
//   }
//   for(ll i=0;i<3;i++) cout << ans[i] << endl;
// }