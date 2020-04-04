#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

vector<ll> enumDivisor(ll n){
    vector<ll> res;
    for(ll i = 1; i*i <= n; i++){
        if(n%i != 0)continue;
        res.push_back(i);
        if(i*i != n) res.push_back(n/i);
    }
    return res;
}

int main()
{
    ll n;
    cin >> n;
    int ans = 0;
    for(ll x : enumDivisor(n)){
        if(x ==1)continue;
        ll tmp = n;
        while (tmp%x == 0) tmp /= x;
        tmp %= x;
        if(tmp == 1) ++ans;
    }
    ans += enumDivisor(n-1).size()-1;
    cout << ans <<endl;
    return 0;
}