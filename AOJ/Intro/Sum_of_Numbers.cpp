#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int sum=0;
    char ch;
    while(1){

        while((ch = getchar())!='\n'){
            sum +=ch - '0';
        }
        if(sum == 0)break;
        else{
            printf("%d\n",sum);
            sum=0;
        }
    }
}