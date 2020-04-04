#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n;
    double sum = 0,ave = 0,sigma;
    while(true){   
        scanf("%d",&n);
        if(n==0)break;
        int S[n]={0};
        REP(i,n){
            scanf("%d ",&S[i]);
            sum+=S[i];
        }
        ave=sum/n;
        REP(i,n){
            sigma +=(S[i]-ave)*(S[i]-ave);
        }
        sigma=sqrt(sigma/n);
        printf("%.8lf\n",sigma,ave);
        ave=0;sigma=0;sum=0;
    }
}