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
    ll N,max=0;
    string str,ans;
    cin >> N;
    map<string,int> S;
    // vector<string>a(N);
    // REP(i,N) cin >> a[i];
    REP(i,N){
        cin >> str;
        if(S.count(str)){
            S[str]++; 
            if(max < S[str]){
                max = S[str];
                ans = str;
            }
        }
        else{
            S[str] = 1;
            if(max < S[str]){
                max = S[str];
                ans = str;
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}