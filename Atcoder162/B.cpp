#include <bits/stdc++.h>
using namespace std;
#define ll = long long int
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    long long n,cmt=0;
    scanf("%lld",&n);
    REP(i,n+1){
        if(i%3!=0&&i%5!=0)cmt += i;
    }
    printf("%lld",cmt);
    
    return 0;
}