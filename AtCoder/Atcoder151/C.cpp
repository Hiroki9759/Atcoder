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
    ll N,M,p_input,sum_pena =0,sum_ac=0;
    cin >> N >> M;
    vector<ll>p(N,0);
    vector<bool>AC_first(N,false);
    string S;
    REP(i,M){
        cin >> p_input;
        p[p_input-1]++;
        cin >> S;
        if(S=="AC"){
            if(AC_first[p_input-1]==false){
                p[p_input-1]--;
                sum_pena += p[p_input-1];
                sum_ac++;
                AC_first[p_input-1]=true;
            }
        }
    }
    cout << sum_ac << " " << sum_pena << endl;
    return 0;
}