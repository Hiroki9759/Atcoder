#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    bool check;
    long long int K,i=0;
    scanf("%lld",&K);
    
    while (K!=-1)
    {
        check = true;
        int j = i;
        
        while (j)
        { 
            int d = abs((j%10)-(j/10)%10);
            if(d>1) {check=false;break;}
            j/=10;
            if(j<10)break;
        }
        if(i<10) check=true;
        if(check==true)K--;
        if(K==-1)printf("%lld\n",i);
        i++;
    }
    
}