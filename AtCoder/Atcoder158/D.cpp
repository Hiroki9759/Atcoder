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
    string s;
    cin >> s;
    ll q;
    cin >> q;
    string t;
    REP(qi,q){
        int ty;
        cin >> ty;
        if(ty ==1){
            swap(s,t);
        }else{
            int f; char c;
            cin >> f >> c;
            if(f == 1){
                t +=c;
            }else{
                s += c;
            }
        }
    }
    reverse(ALL(t));
    t +=s;
    cout << t << endl;
    return 0;
}