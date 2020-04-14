#include <bits/stdc++.h>
using namespace std;
#define ll = long long int
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int gcd(int x,int y){
    if (x < y) swap(x,y);
    while(y>0){
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}
int main(){
    tuple<int,int,int> a;
    long long K=0,sum=0;
    scanf("%lld",&K);
    REP2(i,1,K+1)REP2(j,1,K+1)REP2(k,1,K+1){
        sum += gcd(gcd(i,j),k);
        
    }
    printf("%lld",sum);
    return 0;
}