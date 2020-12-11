#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    IOS;
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> A(n),B(m);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if(i>0){
            A[i] += A[i-1];
        }
    }
    for (int j = 0; j < m; j++)
    {
        cin >> B[j];
        if(j>0){
            B[j] += B[j-1];
            
        };
    }
    int ans = 0;
    int l = 0, r = n + m;
    while(l<=r){
        ll mid = (l+r)/2;
        ll mn = 1e15;
        for (int i = 0; i <= min(mid,n); i++)
        {
            int j  = mid -i;
            if(j>m)continue;
            if(i == 0)mn = min(mn,B[j-1]);
            else if(j == 0)mn = min(mn,A[i-1]);
            else mn = min(mn,B[j-1]+A[i-1]);

        }
        if(mn <=k||mid == 0){
            ans = mid;
            l = mid +1;
        }else{
            r = mid-1;
        }
        
    }
    cout << ans << endl;
    return 0;
}
