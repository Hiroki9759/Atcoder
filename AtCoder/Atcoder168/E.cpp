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
const ll MOD = 1000000007;
const ll MOD_2 = 998244353;
ll modpow (ll radix,ll index){
    if(index == 0)return 1;
    if(index == 1)return radix%MOD;
    ll c;
    c = modpow(radix,index/2);
    c = c * c % MOD;
    if(index % 2){
        return c * radix % MOD;
    }else{
        return c;
    }
}
int main(){
    ll N;
    cin >> N;
    ll count =N;
    vector<ll>A(N),B(N),C(N);
    REP(i,N){
        cin >> A[i] >> B[i];
    }
    
    REP(i,N)REP(j,N-i){
        if(A[i]*A[j]+B[i]*B[j]==0)count--;
    }
    cout << count*modpow(2,N-3);
    // -1 -count*modpow(2,N-2);

    return 0;
}