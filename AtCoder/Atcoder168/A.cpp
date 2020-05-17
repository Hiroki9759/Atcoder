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
    string S = "bon";
    cin >> N;
    if(N%10==2||N%10==4||N%10==5||N%10==7||N%10==9)S="hon";
    else if(N%10==0||N%10==1||N%10==6||N%10==8)S="pon";
    cout << S << endl;;
    return 0;
}