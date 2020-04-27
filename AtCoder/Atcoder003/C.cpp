#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    ll N,K,r;
    double T=0;
    vector<ll> R;
    cin >>N >> K;
    REP(I,N) {cin >> r; R.push_back(r);}
    sort(R.begin(),R.end());
    REP2(i,N-K+1,N+1){
        double rate = (double)R[i-1];
        T = (T+rate)/2.0;
    }
    cout <<  fixed  << setprecision(10) <<T << endl;
    return 0;
}