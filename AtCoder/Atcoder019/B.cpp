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
    string s;
    int cnt = 0;
    string ans;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        cnt++;
        if(i!=0){
            if(s[i]!=s[i-1]){
                ans += s[i-1];
                ans += to_string(cnt-1);
                cnt = 1;
            }
            if(i==s.length()-1){
                ans+=s[i];
                ans += to_string(cnt);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
