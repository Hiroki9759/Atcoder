#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    double a,b,C,S,l,h,c;
    double PI = acos(-1);
    scanf("%lf%lf%lf",&a,&b,&C);
    S = 0.5*a*b*sin(C*PI/180);
    l =a+b+sqrt(a*a+b*b-2*a*b*cos(C*PI/180));
    c = sqrt(a*a+b*b-2*a*b*cos(C*PI/180));
    h = 2*S/a;
    printf("%lf\n",S);
    printf("%lf\n",l);
    printf("%lf\n",h);
}