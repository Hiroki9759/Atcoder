#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

ll n,m,q,a,b,c,d;
vector<tuple<ll,ll,ll,ll> >Q;
ll ans[15],maxv=0;
void DFS(ll pos,ll v){
    ll i;
    if(pos == n+1){
        ll temp =0;
        for(auto x : Q){
            if(ans[get<1>(x)]-ans[get<0>(x)]==get<2>(x)){
                temp += get<3>(x);
            }
        }
        maxv = max(maxv,temp);
        return;
    }
    for(i = v;i <= m;i++){
            ans[pos] = i;
            DFS(pos+1,i);
        }
}
int main(){
    ll i;
    cin >> n >> m >> q;
    REP(i,q){
        cin >> a >> b >> c >> d;
        Q.emplace_back(a,b,c,d); 
    }
    DFS(1,1);
    cout << maxv << endl;
 

    return 0;
}
