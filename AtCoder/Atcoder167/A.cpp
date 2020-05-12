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
    string S,T;
    cin >> S >> T;
    bool rg=true;
    if(S.size()+1!=T.size())rg = false;
    for (int i = 0; i < S.size(); i++)
    {
        if(S[i]!=T[i]){
            rg = false;
            break;
        }
    }
    if(rg)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
