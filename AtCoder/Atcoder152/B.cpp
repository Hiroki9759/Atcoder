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
ll gen_num (ll a,ll b ){
    ll gen_num = 0;
    for(int i = 0; i < b;i++){
        gen_num *= 10;
        gen_num += a;
    }
    return gen_num;
}
int main(){
    ll a,b;
    cin >> a >> b;
    if(a>b){
        cout << gen_num(b,a) << endl;
    }else{
        cout << gen_num(a,b) << endl;
    }
    return 0;
}