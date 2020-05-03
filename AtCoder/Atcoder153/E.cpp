#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
constexpr int inf = 1e9;
constexpr int MAX_H = 1e4;


int main(){
    ll H,N,a,b,k; 
    cin >> H >> N;
    vector<ll>DP(H+1,1e18);
    DP[0] = 0;
    REP(i,N){
        cin >> a >> b;
        REP(j,H) k = min(j+a,H),DP[k] = min(DP[k],DP[j]+b);
    }
    cout << DP[H] << endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// long h,n,a,b,i,j,k;
// main(){
//     cin>>h>>n;
//     vector<long>dp(h+1,1e18);
//     dp[0]=0;
//     for(i=0;i<n;i++){
//         cin>>a>>b;
//         for(j=0;j<h;j++)k=min(j+a,h),dp[k]=min(dp[k],dp[j]+b);
//     }   
//     cout<<dp[h]<<endl;
// }
