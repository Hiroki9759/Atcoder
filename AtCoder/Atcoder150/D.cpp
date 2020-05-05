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

ll gcd(ll x, ll y) { return (x % y)? gcd(y, x % y): y; }
ll lcm(ll x, ll y) { return x / gcd(x, y) * y; }

int main(){
    ll N, M,s=-1,a,l=1;
    bool ok = true;
    cin >> N >> M;
    vector<ll>a(N);
    for(ll i = 0 ;i <=N;i++){
        cin>>a;
        a/=2;
        ll  target= a, pow_index = 0;
        while(target%2==0)target/=2,pow_index++;
        
        if(s==-1)s=pow_index;
        l = lcm(l,a);
        //akの２で割れる回数は等しくないと成り立たない
        if(s!=pow_index||l>M){
            ok = false;
            break;
        } 
    }
    if(!ok){
        cout << 0;
        return 0;
    }
    cout << (M-l)/(l*2)+1;
    
    
    
}