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
    ll N,i=0,x,minimum_HP=INF,sum = 0;
    vector<ll> X;
    for(cin>>N;i<N;i++){cin >>x; X.push_back(x);}
    sort(ALL(X));
    REP2(i,0,101){
        sum = 0;
        REP(j,N){
            sum += (i-X[j])*(i-X[j]);
        }
        minimum_HP =min(minimum_HP,sum);
    }
    cout << minimum_HP << endl; 
    return 0;
}