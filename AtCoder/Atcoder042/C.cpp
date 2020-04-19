#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

bool search(ll n,ll d[],ll k){
    while(n!=0){
        int m = n%10;
        REP(i,k){
            if(d[i]==m)return false;
        }
        n/=10;
    }
    return true;
}

int main(){
    ll N,K;
    ll d[10];
    scanf("%lld %lld\n",&N,&K);
    REP(i,K)scanf("%lld ",&d[i]);

    while(!search(N,d,K)){
        N++;
    }
    printf("%d\n",N);
    return 0;
}