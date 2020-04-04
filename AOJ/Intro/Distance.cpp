#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    double d,dx,dy,x1,x2,y1,y2;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    dx = abs(float(x1)-float(x2));
    dy = abs(float(y1)-float(y2));
    d = sqrt(dx*dx+dy*dy);
    printf("%lf\n",d);
}