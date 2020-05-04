#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    int n,m,h[114514],ma[114514];
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin>>h[i];
        ma[i]=0;
        } 
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        ma[a]=max(ma[a],h[b]);
        ma[b]=max(ma[b],h[a]);
        }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=h[i]>ma[i];
        }
    cout<<ans<<endl;
}