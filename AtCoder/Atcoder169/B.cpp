#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <boost/rational.hpp>
using namespace std;
namespace mp = boost::multiprecision;
// 任意長整数型
using ll= mp::cpp_int;


#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

int main(){
    long long N;
    ll ans=1;
    cin >> N;
    vector<ll>A(N);
    for (ll i = 0; i < N; i++)
    {
        ll a;
        cin>>a;
        if(a==0){
            cout << "0" << endl;
            return 0;
        }
        ans *=a;
        if(ans > 1000000000000000000){
            cout << "-1" << endl;
            return 0;
        }
    }

    
    cout << ans << endl;
    
    return 0;
}
