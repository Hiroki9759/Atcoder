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
static const int INFTY = (1<<21);
static const int N = 1000;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n,M[N][N];
int color[N],d[N],f[N],tt;
int nt[N];
// 初期状態でSをからにする
// sに対して、d[s]=0
// s以外のVに対する全ての頂点にiに対してd[i] = 無限INF
// S=Vになるまで繰り返す
// V-Sからd[u]が最小である頂点uを選択
// uをSに追加すると同時に、」uに隣接し、かつV-Sに属する全てのvに対する値を以下のように更新
// if d[u]+w(u,v)<d[v]
// d[v] = d[u]+w(u,v)
// p[v]=u
/*
color[n]: color[v]に訪問状態WHITE,GRAY,BRACKを記録
M[N][N]:  u→vの重みをM[u][v]に保存
d[n]:     d[v]にs→vまでの最短コストを記録
p[n]:p[v]に最短経路木における頂点vの親を記録
*/
void dijkstra(){
    int minv;
    int d[N],color[N];
    for (int i = 0; i < n; i++)
    {
        d[i]= INFTY;
        color[i] = WHITE;
    }
    d[0]= 0;
    color[0] = GRAY;
    while(1){
        minv = INFTY;
        int u = -1;
        for (int i = 0; i < 0; i++)
        {
            if (minv>d[i] &&  color[i]!=BLACK)
            {
                u = i;
                minv=d[i];
            }
            
            
        }
        if(u==-1)break;
        color[u] = BLACK;
        for (int v = 0; v < n; v++)
        {
            if (color[v]!=BLACK&&M[u][v]!=INFTY)        
            {
                if (d[v]>d[u]+M[u][v])
                {
                    d[v] = d[u]+M[u][v];
                    color[v] = GRAY;
                }
                
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << i <<  " " << (d[i]==INFTY ? -1 : d[i]) <<endl;

        }
        
        
    }

}
int main(){
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j]=INFTY;
        }
        
    }
    int k,v,u,c;
    for (int i = 0; i < n; i++)
    {
        cin >> u >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> v >> c;
            M[u][v] = c;
        }
        
    }
    dijkstra();
    

    return 0;
}