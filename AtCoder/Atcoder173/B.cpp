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
    long long N,A=0,W=0,T=0,R=0;
    string s;
    cin >> N;
    for (long long i = 0; i < N; i++)
    {
        cin >> s;
        if(s=="AC"){
            A++;
        }else if(s=="WA"){
            W++;
        }else if(s=="TLE"){
            T++;
        }else{
            R++;
        }
    }
    cout << "AC x " << A << endl;
    cout << "WA x " << W << endl;
    cout << "TLE x " << T << endl;
    cout << "RE x " << R << endl;

    return 0;
}
