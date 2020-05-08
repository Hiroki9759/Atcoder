#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 500000
#define SENTINEL 2000000000
#define NIL -1
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
static const ll N =100;
int main(){
    ll Adj[N][N];
    ll n,u,k,v;
    cin >> n;
    REP(i,n)REP(j,n)Adj[i][j]=0;

    REP(i,n){
        cin >> u >> k;
        u--;
        REP(j,k){
            cin >> v;
            v--;
            Adj[u][v] =1;
        }
    }
    REP(i,n){
        REP(j,n){
        if(j)cout << " ";
        cout<<Adj[i][j];
        }
        cout << endl;
    }
    
    return 0;
}