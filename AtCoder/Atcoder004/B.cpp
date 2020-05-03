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
    vector<vector<string> > field(4,vector<string>(4," "));
    
    for(int i = 0; i < 4; i++){
        for(int j = 0 ; j < 4; j++){
            cin >> field[i][j]; 
        }
    }
    for(int i = 3; i >= 0; i--){
        for(int j = 3 ; j >= 0; j--){
            
            cout << field[i][j];
            if(j==0) cout << endl;
            else cout << " ";
        }
    }
    return 0;
}