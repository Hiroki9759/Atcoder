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
    int n;
    scanf("%d",&n);
    if(n%10==7||(n/10)%10==7||n/100==7)printf("Yes");
    else printf("No");
    return 0;
}