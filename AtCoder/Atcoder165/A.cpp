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
    ll K,A,B;bool tf=false;
    cin >> K;
    cin >> A >> B;
    for(int i = 0; i<1000;i++){
        if(K*i>=A&&K*i<=B){
            tf = true;
            break;
        }
    }
    if(tf){
        cout << "OK" << endl;
    }else{
        cout << "NG" << endl;
    }
    return 0;
}