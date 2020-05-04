#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
const ll MOD = 1000000007;
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
    cin.tie(0);
	ios::sync_with_stdio(false);
    ll N,ans=0;
    cin >> N;
    vector<ll>A(N);
    REP(i,N){
        cin>>A[i];
        (ans+=modpow(A[i],MOD-2))%=MOD;
    }
    for(int i = 2; i*i <= 1e6;i++){
        int cnt = 0;
        for(int j=0;j<N;j++){
            int now=0;
            while(A[j]%i==0){
                now++;
                A[j]/=i;
            }
            if(cnt < now)cnt = now;
        }
        (ans*=modpow(i,cnt))%=MOD;
    }
    REP(i,N){
        if(A[i]>1){
            REP2(j,i+1,N){
                if(A[i]==A[j])A[j]=1;
            }
            (ans*=A[i])%=MOD;
        }
    }
    cout << ans << endl;
    return 0;
}