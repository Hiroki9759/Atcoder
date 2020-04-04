#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    char str[20001];
    int n,m,length;
    while (true)
    {
        scanf("%s",str);
        if(str[0]=='-')break;
        length = 0;
        for (int k = 0; str[k]!='\0'; k++)length++;
        scanf("%d",&m);
        int index =0;
        REP(i,m){
            scanf("%d",&n);
            REP(j,n){
                str[index+length]=str[index];
                index++;
            }
        }
        REP(p,length) printf("%c",str[index+p]);
        printf("\n");
    }
}