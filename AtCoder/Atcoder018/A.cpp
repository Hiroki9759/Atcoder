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
    long long A, B, C;
    vector<long long>D;
    cin >> A >> B >> C;
    
    D.push_back(A);
    D.push_back(B);
    D.push_back(C);
    sort(ALL(D));
    for(int i=2;i>=0;i--){
        if(D[i]==A){cout << "1" << endl;}
        if(D[i]==B){cout << "2" << endl;}
        if(D[i]==C){cout << "3" << endl;}
        
    }
    
    return 0;
}