#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    while(1){
        
        int n,x,counter=0;
        scanf("%d%d",&n,&x);
        if(n==0&&x==0)break;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {   
                if(i==j) continue;
                for (int k = 1; k <= n; k++)
                {   
                    if(k==i||j==k) continue;
                    if(i+j+k==x)counter++;
                }
            }
        }
        printf("%d\n",counter/6);
    }
}