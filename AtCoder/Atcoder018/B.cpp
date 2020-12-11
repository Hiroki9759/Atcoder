#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 500000
#define SENTINEL 2000000000
#define NIL -1
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    string S;
    long long N;
    int l,r;
    cin>>S;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>l>>r;
        string S_part = S.substr(l-1,r-l+1);
        reverse(S_part.begin(),S_part.end());

        for (int j = l-1; j < r; j++)
        {
            S[j]= S_part[j-l+1];
        }
        
    }
    cout << S << endl;
    return 0;
}