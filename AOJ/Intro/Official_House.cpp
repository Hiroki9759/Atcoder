#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n,b,f,r,v;
    int count[4][3][10]={0};
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d%d",&b,&f,&r,&v);
        if(count[b-1][f-1][r-1]+v<0){
            count[b-1][f-1][r-1]=0;
        }else if(count[b-1][f-1][r-1]+v>9){
            count[b-1][f-1][r-1]=9;
        }else{
            count[b-1][f-1][r-1]+=v;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                printf(" %d",count[i][j][k]);
            }
            printf("\n");
        }
        if(i!=3)printf("####################\n");
        
    }
}