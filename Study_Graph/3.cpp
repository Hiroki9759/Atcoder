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
// const long long INF = numeric_limits<long long>::max();
static const int INF = (1<<21);
static const int N = 100;
int n,M[N][N];
int d[N];

void bfs(int s){
    queue<int> q;
    q.push(s);
    for (int i = 0; i < n; i++) d[i] =INF;
    
    d[s] = 0;
    int u;

    while(!q.empty()){
        u = q.front();q.pop();
        for (int v = 0; v < n; v++)
        {
            if(M[u][v]==0)continue;
            if(d[v]!=INF)continue;
            d[v] = d[u] + 1;
            q.push(v);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i+1<< " "<< ((d[i]==INF)?(-1):d[i]) << endl;
    }
        
    
}
int main(){
    int u,k,v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j]=0;
        }
        
    }
    for (int i = 0;  i < n;i++)
    {
        cin>>u>>k;
        u--;
        for(int j = 0;j<k;j++){
            cin>>v;
            v--;
            M[u][v] = 1;
        }
    }
    bfs(0);
    return 0;
    
    

    
    
    return 0;
}