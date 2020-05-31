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
static const int INFTY = (1<<29);
int main(){
    long long  m;
    long long n,a,b,c,d;
    cin >> m;
    
    for (long long i = 0; i < m; i++)
    {
        cin >> n >> a >> b >> c >> d;
        long long T[n*5];
        REP(j,INFTY){T[j]=INFTY;}
        long long x[INFTY] = {0};
       
        for (long long k = 0; k+1 < n;k++){
            T[k+1]=min(T[k+1],T[k]+d);
        }
        for (long long k = n; k-1 > 0;k--){
            T[k-1]=min(T[k-1],T[k]+d);
        }
        for (long long k = 1; k*2< n;k*=2){
            T[k*2]=min(T[k*2],T[k]+a);
        }
        for (long long k = 1; k*3< n;k*=3){
            T[k*3]=min(T[k*2],T[k]+b);
        }
        for (long long k = 1; k*5< n;k*=5){
            T[k*5]=min(T[k*5],T[k]+c);
        }     
        cout << T[n] << endl;
    }
    
    return 0;
}