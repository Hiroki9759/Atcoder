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
static const int INF=1<<29;
 
int main(){
    int R, G, B;
    scanf("%d %d %d", &R, &G, &B);
 
    int N=R+G+B;
    int dp[2][1010];
    //初期化
    memset(dp, 0x3f, sizeof dp); dp[0][0]=0;
    //全て１０００ずらす事で正にする
    for (int i=-1000; i<1000; ++i)
        for (int j=0; j<=N; ++j) {
            //^はXOR (i&1)=0偶数ならばtrue (i&1)=1奇数ならばfalse
            //min(dp[0][],dp[1][])
            // if (dp[(i&1)^1][j] > dp[i&1][j])
            //     dp[(i&1)^1][j] = dp[i&1][j];
            dp[(i&1)^1][j] = min(dp[(i&1)^1][j],dp[i&1][j]);
            int cost=INF;
            if (j < R) {
                cost = abs(-100-i);
            } else if (j < R+G) {
                cost = abs(i);
            } else if (j < R+G+B) {
                cost = abs(100-i);
            }
 
            // if (dp[(i&1)^1][j+1] > dp[i&1][j] + cost)
            //     dp[(i&1)^1][j+1] = dp[i&1][j] + cost;
            dp[(i&1)^1][j+1] = min(dp[(i&1)^1][j+1],dp[i&1][j] + cost);
            dp[i&1][j] = INF;
        }
 
    printf("%d\n", dp[0][N]);
    return 0;
}


