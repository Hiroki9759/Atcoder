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
    ll X;
    cin >> X;
    vector<ll> v;
    if(X == 1){v.push_back(1);}
    else{
        for(ll i = 1; i < sqrt(X);i++){
            if (X%i == 0){
                v.push_back(i);
                v.push_back(X/i);
                
            }
        }
    }
    for(auto x : v){
        for(ll a = 0;pow(a,4) < X; a++){
            ll b = a-x;
            if(pow(a,5)-pow(b,5)==X){
                cout << a << " " <<b << endl;
                break; 
            }
        }
    }
    return 0;
}