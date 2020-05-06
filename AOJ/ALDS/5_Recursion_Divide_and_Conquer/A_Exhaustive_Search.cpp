#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
//数列Aの部分和でmが作れるか（q回答える）
int main(){
    int n,q,A[3000],M[3000];
    int dp[3000];

    cin >> n;
    REP(i,n){
        cin >> A[i];
    }
    cin >> q;
    REP(h,q){
        cin >> M[h];
        REP(i,M[h]+1)dp[i]=-1;
        dp[0] = 0;
        REP(i,n){
            REP(j,M[h]+1){
                if(dp[j]>=0){
                    dp[j]=1;
                }else if(dp[j-A[i]]<=0||j<A[i]){
                    dp[j]=-1;
                }else{
                    dp[j]=dp[j-A[i]]-1;
                }
            }
        }
        if(dp[M[h]] >= 0)cout << "yes" << endl;
        else{cout << "no" << endl;}
    }
    return 0;
}