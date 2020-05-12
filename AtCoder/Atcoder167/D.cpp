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
    ll N,K,ans=1;
    cin >> N >> K;
    vector<ll>A(N);
    set<ll>B;
    B.insert(1);
    ll roop_size = 0;
    for (ll i = 0; i < N; i++)
    {
        cin >> A[i];
        if(!B.count(A[i])){
            B.insert(A[i]);
        }else{
            roop_size = B.size();
            break;
        }
    }
    roop_size--;
    
    K%=roop_size;
    
   
    for(ll i = 0;i<K;i++){
        ans = A[ans];
    }
    cout << ans << endl;
    
    return 0;
}