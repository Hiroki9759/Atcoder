#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int m,f,r;
    while(1){
        scanf("%d%d%d",&m,&f,&r);
        if(m==-1&&f==-1&&r==-1)break;
        if(m==-1||f==-1)printf("F\n");
        else if(m+f>=80)printf("A\n");
        else if(m+f>=65)printf("B\n");
        else if(m+f>=50)printf("C\n");
        else if(m+f>=30){
            if(r>=50)printf("C\n");
            else printf("D\n");
        }
        else printf("F\n");
    } 
}