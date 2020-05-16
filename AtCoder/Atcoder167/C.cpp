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
const long long INF = 1001001001;
struct Item{
    ll cost;vector<ll>A;
};
Item items[13];
ll C[13][13],G[13][13];

int main(){
    ll N,M,X,a;
   
    cin >> N >> M >> X;
    vector<ll> c(N);
    //vector<ll> sum_rikaido_MAX(M,0)
    ll A[N][M];
    for (ll i = 0; i < N; i++){
        cin >> c[i];
        for (ll j = 0; j < M; j++){
            cin >> A[i][j];
            //sum_rikaido_MAX[j]+=a;
        }
    }
    int ans = INF;
    REP(s,1<<N){
        int cost = 0;
        vector<ll>d(M);
        for(int i = 0;i < N;i++){
            if(s>>i&1){
                cost +=c[i];
                REP(j,M){
                    d[j]+=A[i][j];
                }
            }
        }
        bool ok = true;
        REP(j,M)if(d[j]<X)ok = false;
        if(ok) ans = min(ans,cost);
    }
    if(ans == INF){cout << -1 << endl;}
    else cout << ans << endl;
    return 0;
}