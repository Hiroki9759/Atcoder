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
    ll N,M,Q,sum = 0,a,c,b,d;
    cin >> N >> M >> Q;
    vector<tuple<ll,ll,ll,ll>> NUP;
    vector<bool>E;
    vector<ll> A;
    bool valid = true;
    REP(i,Q){
        cin >>a>>b>>c>>d; 
        NUP.emplace_back(d,a,b,c); 
    }
    sort(begin(NUP),end(NUP),greater<tuple<ll,ll,ll,ll>>());

    for(auto x: NUP){
        if(A.size()>N)break;
        
        A.push_back(get<1>(x));
        A.push_back(get<2>(x));
        
    }
    sort(ALL(A));
    for(auto x: NUP){ 
        if(binary_search(A.begin(),A.end(),get<1>(x))&&binary_search(A.begin(),A.end(),get<2>(x))&&binary_search(A.begin(),A.end(),get<3>(x))){
            sum += get<0>(x);
        }
    }
    cout << sum << endl;
    return 0;
}