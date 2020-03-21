// Etavioxy
#include<cstdio>
#include<cctype>
#include<cstring>
#include<algorithm>
#include<cmath>
#define il inline
#define ll long long
#define rep(i,s,t) for(register int i=(s);i<=(t);i++)
#define rev_rep(i,s,t) for(register int i=(s);i>=(t);i--)
#define each(i,u) for(int i=head[u];i;i=bow[i].nxt)
#define file(s) freopen(s".in" ,"r",stdin),freopen(s".out","w",stdout)
#define pt(x) putchar(x)
using namespace std;
il int ci(){
	register char ch;int f=1;
	while(!isdigit(ch=getchar()))f=ch=='-'?-1:1;
	register int x=ch^'0';
	while(isdigit(ch=getchar()))x=(x*10)+(ch^'0');
	return f*x;
}

enum{N=1000023};

int comp[2][2]={1,0,1,1};

il ll lucas(ll n,ll m){
	ll ans = 1;
	while( n && m ){
		ans*=comp[n&1][m&1];
		n>>=1, m>>=1;
		if( ans==0 ) return 0;
	}
	return ans;
}

char a[N];
int f[103][103];

int main(){
	int n=ci();
	scanf("%s",a+1);
	int cnt1=0, cnt2=0, cnt3=0;
	rep(i,1,n){
		if( a[i]=='1' ) cnt1++;
		if( a[i]=='2' ) cnt2++;
		if( a[i]=='3' ) cnt3++;
	}
	if( n<=100 ){
		rep(i,1,n) f[1][i] = a[i]-'0';
		rep(i,2,n){
			rep(j,1,n-i+1) f[i][j] = abs(f[i-1][j]-f[i-1][j+1]);
		}
		printf("%d\n",f[n][1]);
		return 0;
	}
	if( cnt2==0 ){
		rep(i,1,n) if( a[i]=='3' ) a[i]='2';
	}
	int ans = 0;
	rep(i,0,n-1){
		if( lucas(n-1,i) ) ans ^= (a[i+1]&1);
	}
	if( cnt2==0 ) ans*=2;
	printf("%d\n",ans);
	return 0;
}
