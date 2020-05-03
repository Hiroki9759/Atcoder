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
    ll N,M,a=0,b=0,c=0;
    scanf("%lld%lld",&N,&M);
    M -= N*2;
    if(M<0||M>N*2) printf("-1 -1 -1\n");
    else{
        if(M%2==0){
            b=0;c=M/2;a=N-c;  
        }
        else{
            b=1;c=M/2;a=N-c-1;
        }
        printf("%lld %lld %lld\n",a,b,c);

    }
    return 0;
}