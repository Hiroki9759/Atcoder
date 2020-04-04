#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();


int n;
double X[100],Y[100];

double distance(double p){
    double sum = 0;
    REP(i,n){
        double w = abs(X[i]-Y[i]);
        sum += pow(w,p);
    }
    return pow(sum,1.0/p);
}
int main()
{
    cout << fixed << setprecision(12);
    scanf("%d",&n);
    
    REP(i,n)scanf("%lf",&X[i]);
    REP(i,n)scanf("%lf",&Y[i]);
    
    cout << distance(1) << endl;
    cout << distance(2) << endl;
    cout << distance(3) << endl;
    double mx = 0;
    REP(i,n) mx= max(mx,abs(X[i]-Y[i]));
    cout << mx << endl;

    // REP(i,n){
    //     Manhattan += abs(X[i]-Y[i]);
    //     Euclidean += (X[i]-Y[i])*(X[i]-Y[i]);
    //     distance3 += abs(X[i]-Y[i])*(X[i]-Y[i])*(X[i]-Y[i]);
    //     Chebyshev = max(Chebyshev,abs(X[i]-Y[i]));
    // }
    // Euclidean = sqrt(Euclidean);
    // distance3 = pow(distance3,1.0/3.0);
    // cout << Manhattan <<endl;
    // cout << Euclidean <<endl;
    // cout << distance3 <<endl;
    // cout << Chebyshev <<endl;

    // // printf("%.8lf\n",Manhattan);
    // // printf("%.8lf\n",Euclidean);
    // // printf("%.8f\n",distance3);
    // // printf("%.8lf\n",Chebyshev);
}