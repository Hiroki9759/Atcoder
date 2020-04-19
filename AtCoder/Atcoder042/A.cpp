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
    ll S[3];
    scanf("%lld%lld%lld",&S[0],&S[1],&S[2]);
    sort(S,S+3);
    if(S[0]==5&&S[1]==5&&S[2]==7)printf("YES");
    else printf("NO");

    return 0;
}