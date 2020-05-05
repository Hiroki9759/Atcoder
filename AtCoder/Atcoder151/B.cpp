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
    ll K,N,M,a;
    ll sum=0;
    cin >> N >> K >> M;
    REP(i,N-1){cin >> a;sum+=a;}
    if(N*M-sum>K){
        cout << "-1" << endl;
    }else if(N*M-sum<=0){
        cout << "0" << endl;
    }else{
        cout << N*M - sum << endl;
    }
    return 0;
}