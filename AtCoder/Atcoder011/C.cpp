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
ll dp[310];
int main(){
    ll N,NG1,NG2,NG3;
    cin >> N >> NG1 >> NG2 >> NG3;

    if(N==NG1||N==NG2||N==NG3){
        cout << "NO" << endl;
        return 0;
    }
    
    REP(i,301)dp[i] = 1LL<<60;
    dp[N] = 0;
    for(int i = N; i >=0;i--){
        if(i==NG1 ||i==NG2||i==NG3){
            continue;
        }
        for(int j = 1; j<=3;j++){
            dp[i-j] = min(dp[i]+1,dp[i-j]);
        }
    }
    if(dp[0]<=100) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
  
}
