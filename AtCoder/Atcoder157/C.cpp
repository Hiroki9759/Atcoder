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
    pair<int,int> sc;
    ll N,M;
    cin >> N >> M;
    int s[M],c[M];
    int A[N];
    REP(i,N) A[i] = 0; 
    if(N>1){
        A[0] = 1;
    }
    REP(i,M){
        cin >> s[i] >> c[i]; 
    }
    REP(i,M){
        REP(j,M){
            if(s[i]==s[j]&&c[i]!=c[j]){
                cout << "-1" << endl;
                return 0;
            }
        }
    }
    REP(i,N){
        REP(j,M){
            if(i+1 == s[j]){
                A[i] = c[j];
            }
        }
    }
    ll ans =0;
    REP(i,N){
        ans *= 10;
        ans +=A[i];  
    }
    if(ans < pow(10,N-1)-1) cout << "-1" << endl;
    else cout << ans << endl;
    return 0;
     
    
    return 0;
}