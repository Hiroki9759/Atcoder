#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n,m,A[100][100]={0},b[100]={0};
    long long int c;
    scanf("%d %d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c=0;
        for (int j = 0; j < m; j++)
        {
            c+=A[i][j]*b[j];
        }
        printf("%lld\n",c);
    }
}