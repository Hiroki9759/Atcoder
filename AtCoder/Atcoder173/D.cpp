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
    long long N,smallest=1000000,sum=0;
    
    cin >> N;
    vector<int> a(N);
    REP(i,N)cin>> a[i];
    sort(a.rbegin(),a.rend());
    ll ans = 0;
    int t = N-1;
    REP(i,N){
        int lim = 2;
        if(i==0)lim = 1;
        REP(j,lim){
            if(t>0){
                ans +=a[i];
                t--;
            }
        }
    }
    // long long A[N];
    // for (long long  i = 0; i < N; i++)
    // {
    //     cin >> A[i];
    //     sum +=A[i];
    //     if(smallest>A[i]){
    //         smallest=A[i];
    //     }
    // }
    // cout << sum-smallest << endl;

    cout << ans << endl;

    return 0;
}