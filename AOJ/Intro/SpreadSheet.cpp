#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int r=0,c=0,A[150][150]={0};
    scanf("%d%d",&r,&c);
    REP(i,r){
        REP(j,c){
            
            scanf("%d",&A[i][j]);
            A[r][j]+=A[i][j];
            A[i][c]+=A[i][j];
            A[r][c]+=A[i][j];
            
        }
    }
    REP(i,r+1){
        REP(j,c+1){
            if(j==0)printf("%d",A[i][j]);
            else printf(" %d",A[i][j]);
        }
        printf("\n");
    }
}