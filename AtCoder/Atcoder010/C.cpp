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
    ll tx_a,ty_a,tx_b,ty_b,T,V,n;
    ll x ,y;
    bool uwaki_possible = false;
    cin >> tx_a >> ty_a >> tx_b >> ty_b >> T >> V >> n;
    double Distance = T*V;
    REP(i,n){
        cin >> x >> y;
        double to_waruimushi = (double)sqrt(pow((tx_a - x),2)+ pow((ty_a - y),2));
        double from_waruimusi = (double)sqrt(pow((tx_b - x),2)+ pow((ty_b - y),2));
        if(to_waruimushi+from_waruimusi<=Distance){
            uwaki_possible = true;
        }
    }
    if(uwaki_possible){
        cout << "YES" << endl;
    }else{
    cout << "NO" << endl;
    }
    return 0;
}