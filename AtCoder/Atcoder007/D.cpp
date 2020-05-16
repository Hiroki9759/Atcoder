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

ll Banned_number(string s){
    ll len = s.size();
    ll dp[20][2][2][2] = {};
    dp[0][0][0][0]=1;
    REP(i,len)REP(j,2)REP(k,2)REP(l,2){
        ll lim = j ? 9 : s[i] - '0';
        REP(d, lim+1) {
            dp[i+1][j||d <lim][k||d==4][l||d==9] += dp[i][j][k][l];
        }
    }
    ll res = 0;
    REP(j,2)REP(k,2)REP(l,2){
        if(k||l)res += dp[len][j][k][l];
    }
    return res;
}

signed main()
{   
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cout << fixed << setprecision(12);
    ll a,b;
    cin >> a >> b;
    string A = to_string(a-1);
    string B = to_string(b);
    cout << Banned_number(B) - Banned_number(A) << endl;
    return 0;
}
