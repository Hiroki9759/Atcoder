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
    int n;
    cin>>n;
    int i,j,k,l;
    int d[55][55];
    REP(i,n)REP(j,n)cin >> d[i][j];
    int q;
    cin >> q;
    int p[2503];
    REP(i,q)cin>>p[i];
    int sum[55][55]={0};
    REP(i,n)REP(j,n)sum[i+1][j+1] = sum[i][j+1]+sum[i+1][j]-sum[i][j]+d[i][j];
    int ans[2503]={0};
    REP(i,n)REP(j,n){
        for(int k = i + 1;k <= n; k++){
            for(int l = j + 1;l<=n;l++){
                if(ans[(k-i)*(l-j)]<sum[k][l]+sum[i][j]-sum[i][l]-sum[k][j]){
                    ans[(k-i)*(l-j)] = sum[k][l]+sum[i][j]-sum[i][l]-sum[k][j];
                }
            }
        }
    }
    for(i = 1;i<=n*n;i++){
        ans[i] = max(ans[i],ans[i-1]);
    }
    for(i = 0;i<q;i++){
        cout << ans[p[i]] << endl;
    }
}