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
    bool con[15][15]={};
    ll n,m,x,y;
    cin >> n >> m;
    REP(i,m){
        cin >> x >> y;
        con[x-1][y-1] = con[y-1][x-1] = true;
    }
    ll ans = 0;
    //a~n人までの組み合わせをビットで試している
    for(int S = 1 << n; --S;){
        int t = bitset<32>(S).count();
        //大きい見込みがない場合はスルー
        if(t <= ans){continue;}

        bool ok = true;
        for(int i = 0; i < n; ++i)
		for(int j = 0; j < i; ++j){
			if(S >> i & S >> j & 1 && !con[i][j]){
				ok = false;
			}
		}
        if(ok){ans = t;}
    }
    cout << ans << endl;
    return 0;
}