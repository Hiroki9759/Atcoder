#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    long long int n,m,l;
    scanf("%lld%lld%lld",&n,&m,&l);
    long long int A[n][m]={0},B[m][l]={0},C[n][l]={0};
    REP(i,n)REP(j,l) C[i][j]=0;
    REP(i,n)REP(j,m) scanf("%lld",&A[i][j]);
    REP(i,m)REP(j,l) scanf("%lld",&B[i][j]);
    REP(i,n)REP(j,l)REP(k,m) C[i][j]+=A[i][k]*B[k][j];
    REP(i,n){
        REP(j,l){
            if(j==0)printf("%lld",C[i][j]);
            else printf(" %lld",C[i][j]);
        }
        printf("\n");
    }
}