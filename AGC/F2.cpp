#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;
mt19937 mrand(random_device{}()); 
const ll mod=1000000007;
int rnd(int x) { return mrand() % x;}
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head


#define rep(i,a,n) for (int i=a;i<n;i++)

int n,m,q;
int id[100][100];
vector<array<ll,3>> shop[100];
array<int,3> c[100];
vector<pair<ll,ll>> pp;

namespace mincost {
  const int V=10100,E=400000;
  // inf=0x20202020,_inf=0x20;
  ll dis[V],f[E],c[E],flow,cost,inf=1ll<<60;
  int q[V*30],vis[V],fst[V],pre[V],nxt[E],y[E],S,T,tot,tn;
  void init(int s,int t,int Tn) {
    tot=1; tn=Tn;
    rep(i,0,tn) fst[i]=0;
    S=s;T=t;
  }
  void add(int u,int v,ll ff,ll cc) {
    tot++;y[tot]=v;nxt[tot]=fst[u];f[tot]=ff;c[tot]=cc;fst[u]=tot;
    tot++;y[tot]=u;nxt[tot]=fst[v];f[tot]=0;c[tot]=-cc;fst[v]=tot;
  }
  bool spfa() {
    rep(i,0,tn) dis[i]=inf,vis[i]=0,pre[i]=0;
    dis[S]=0;q[0]=S;vis[S]=1;
    int t=1;
    rep(i,0,t) {
      int u=q[i];
      for (int j=fst[u];j;j=nxt[j]) {
        int v=y[j];
        if (f[j]&&dis[v]>dis[u]+c[j]) {
          dis[v]=dis[u]+c[j];
          pre[v]=j;
          if (!vis[v]) vis[v]=1,q[t++]=v;
        }
      }
      vis[u]=0;
    }
    return dis[T]!=inf;
  }
  void augment() {
    int p=T;
    ll _f=inf;
    while (pre[p]) _f=min(_f,f[pre[p]]),p=y[pre[p]^1];
    pp.pb(mp(_f,dis[T]));
    p=T;
    while (pre[p]) f[pre[p]]-=_f,f[pre[p]^1]+=_f,p=y[pre[p]^1];
  }
  void solve() {
    while (spfa()) augment();
  }
}

const ll inf=1ll<<60;

int main() {
	scanf("%d",&n);
	rep(i,0,n) {
		int k;
		ll s,p,c;
		scanf("%d",&k);
		rep(j,0,k) {
			scanf("%lld%lld%lld",&s,&p,&c);
			shop[i].pb({s,p,c});
		}
		sort(all(shop[i]));
	}
	scanf("%d",&m);
	rep(i,0,m) {
		int u,v,w;
		scanf("%d%d%d",&u,&v,&w);
		--u; --v;
		c[i]={u,v,w};
	}
	int s=0,t=1,mm=2;
	rep(i,0,n) rep(j,1,SZ(shop[i])) id[i][j]=mm++;
  mincost::init(s,t,mm);
	rep(i,0,n) {
		int k=SZ(shop[i]);
		id[i][0]=s; id[i][k]=t;
		rep(j,0,k) {
			mincost::add(id[i][j+1],id[i][j],inf,0);
			mincost::add(id[i][j],id[i][j+1],inf,shop[i][j][2]);
			mincost::add(id[i][j],id[i][j+1],shop[i][j][1],0);
		}
	}
	rep(i,0,m) {
		int u=c[i][0],v=c[i][1],w=c[i][2];
		rep(j,0,SZ(shop[v])) {
			int pos=SZ(shop[u]);
			rep(k,0,SZ(shop[u])) if (shop[u][k][0]+w>=shop[v][j][0]) {
				pos=k;
				break;
			}
			//printf("gg (%d,%d) >= (%d,%d)\n",u,pos,v,j);
			mincost::add(id[v][j],id[u][pos],inf,0);
		}
	}
  mincost::solve();
  scanf("%d",&q);
  rep(i,0,q) {
    ll a;
    scanf("%lld",&a);
    ll ans=0;
    for (auto x:pp) {
      //printf("gg %lld %lld\n",x.fi,x.se);
      if (x.se>=a) break;
      if (x.fi>=1ll<<55) { ans=-1; break; }
      ans+=x.fi*(a-x.se);
    }
    printf("%lld\n",ans);
  }
  mincost::solve();    
}
