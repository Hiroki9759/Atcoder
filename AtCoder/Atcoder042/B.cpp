#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    ll L,N;
    cin >> N >> L;
    priority_queue<string,vector<string>,greater<string>> wordlist;
    
    string s,ans="";
    for (ll i = 0; i < N; i++)
    {
        cin >> s;
        wordlist.push(s);
    }
    
    while (!wordlist.empty())
    {
        ans += wordlist.top();
        wordlist.pop();
    }
    
    cout << ans << endl;
   
}