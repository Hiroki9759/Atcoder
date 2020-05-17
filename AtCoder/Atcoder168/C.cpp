#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

int main(){
    double A,B,H,M;
    cin >> A >> B >> H >> M;
    double ans=0;
    double H_r,M_r;
    H_r = (double)H*30.0+M*0.5;
    M_r = (double)M*6.0;
    double d_r =(double)abs(H_r-M_r);
    if(d_r>180)d_r =360.0-d_r;
    // cout << (double)A*(double)A << (double)B*(double)B << endl;

    ans =(double)sqrt((double)A*(double)A + (double)B*(double)B -2.0*(double)A*(double)B*(double)cos((double)d_r*M_PI/180.0));
    cout << fixed << setprecision(20) << ans << endl;
    

    return 0;
}
