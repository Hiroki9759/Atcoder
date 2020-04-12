#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

long long int maxv(long long int R[],long long int n){
    long long minv = pow(10,10);
    long long  maxv = -pow(10,10);
    REP(j,n){
        maxv = max(maxv,R[j]- minv);
        minv = min(minv,R[j]);
    } 
    return maxv;
}


int main(){
    long long int n;
    scanf("%lld",&n);
    long long int R[n];
    for (int i = 0; i < n; i++){
        scanf("%lld",&R[i]);
    }
    printf("%lld\n",maxv(R,n));
    return 0;
}