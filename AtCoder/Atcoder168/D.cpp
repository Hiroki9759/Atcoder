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
static const ll INFTY = (1<<21);



int main(){
    ll N,M,a,b;
    cin >> N >> M;
    ll Ma[N][N]={0};
    ll d[N];
    
    REP(i,M){
        cin >> a >> b;
        a--;
        b--;
        Ma[a][b] = 1;
        Ma[b][a] = 1;
    }
    queue<ll>q;
    q.push(0);
    ll count=0;
    
    for(ll i = 0;i<N;i++){
        d[i] = INFTY;
    }
    d[0]=0;
    ll u;
    while (!q.empty())
    {
        u=q.front();q.pop();
        for(ll v = 0;v < N;v++){
            if(Ma[u][v]==0)continue;
            if(d[v]!=INFTY)continue;
            d[v]=d[u]+1;count++;
            q.push(v);
        }
    }
    
    if(count==N-1){
        cout << "Yes" << endl;
        for(ll i = 1;i<N;i++){
            cout << d[i] << endl;
        }
    }else{
        cout << "No" << endl;
    }
    

    return 0;
}