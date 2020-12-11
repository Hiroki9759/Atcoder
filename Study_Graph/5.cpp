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
static const int N = 1000;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BRACK = 2;
int n;
vector<pair<int, int> > adj[MAX];
void dijkstra(){
    priority_queue<pair<int,int> >PQ;
    int color[MAX];
    int d[MAX];
    for (int i = 0; i < n; i++)
    {
        d[i]= INFTY;
        color[i]=WHITE;
    }
    d[0] = 0;
    PQ.push(make_pair(0,0));
    color[0] GRAY;
    while(!PQ.empty()){
        pair<int,int>f = PQ.top();PQ.pop();
        int u=f.second;
        color[u] =BLACK;

        if(d[u]<f.first *(-1))continue;
        for (int j = 0; j < adj[u].size(); j++)
        {
            int v = adj[u][j].first;
            if(color[v]==BRACK)continue;
            if(d[v]>d[u]+adj[u][j].second){
                d[v] = d[u] + adj[u][j].second;
                PQ.push(make_pair(d[v]*(-1),v));
                color[v]=GRAY;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << (d[i] ==INFTY ? -1 : d[i]) << endl;
    }
    
}

int main(){
    int k,u,v,c;
    cin >> v;
    for (int i = 0; i < n; i++)
    {
        cin>>u>>k;
        for (int j = 0; j < k; j++)
        {
            cin >>v >> c;
            adj[u].push_back(make_pair(v,c));
        }
        
    }
    dijkstra();
    return 0;
}