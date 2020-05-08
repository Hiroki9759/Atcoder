#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 1000
#define VMAX 10000
#define SENTINEL 2000000000
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
ll N,A[MAX],B[MAX],T[VMAX+1],s;

ll solve(){
    ll ans = 0;
    bool V[MAX];
    REP(i,N){
        B[i]=A[i];
        V[i]=false;
    }
    sort(B,B+N);
    REP(i,N)T[B[i]]=i;
    REP(i,N){
        if(V[i])continue;
        ll cur = i;
        ll S = 0;
        ll m = VMAX;
        ll an = 0;
        while(1){
            V[cur] = true;
            an++;
            ll v = A[cur];
            m = min(m,v);
            S +=v;
            cur = T[v];
            if(V[cur])break;
        }
        ans += min(S+(an-2)*m,m+S+(an+1)*s);
    }
    return ans;
}
int main(){
    cin >> N;
    s = VMAX;
    REP(i,N){
        cin >> A[i];
        s = min(s,A[i]);
    }
    ll ans = solve();
    cout << ans << endl;
    return 0;
}