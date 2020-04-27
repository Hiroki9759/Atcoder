#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    ll m;
    scanf("%lld",&m);
    if(m<100){
        printf("00\n");
    }else if(m>=100&&m<=5000){
        m/=100;
        if(m<=10)printf("0%lld\n",m);
        else printf("%lld\n",m);
    }else if(m>=6000&m<=30000){
        m/=1000;
        m+=50;
        printf("%lld\n",m);
    }else if(m>=35000&&m<=70000){
        m/=1000;
        m-=30;
        m/=5;
        m+=80;
        printf("%lld\n",m);
    }else if(m >70000) printf("89\n");
    return 0;
}