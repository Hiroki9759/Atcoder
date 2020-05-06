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
    string s,ans="YES";cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='c'&&s[i+1]=='h')i++;
        else if(s[i]!='o'&&s[i]!='k'&&s[i]!='u')ans="NO";
    }
    cout<<ans<<endl;
}
