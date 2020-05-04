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
    string S;
    cin >> S;
    for(int i = 0;i<S.size();i++){
        if(S[i]-'A'>=0&&S[i]-'Z'<=0&&i>0){
            S[i] = 'a'+(S[i]-'A');
        }else if(S[i]-'a'>=0&&S[i]-'z'<=0&&i == 0){
            S[i] ='A' + (S[i]-'a');
        }
    }
    std::cout << S << endl;
    return 0;
}