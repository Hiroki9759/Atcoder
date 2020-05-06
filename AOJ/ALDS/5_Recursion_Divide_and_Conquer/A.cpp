#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
//TLEだが成長した

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    REP(i,n){cin >> A[i];}
    int q,m;
    cin >> q;
    REP(k,q){
        bool flag = false;
        cin >> m;
        for(int bit = 0; bit < (1<<n);++bit){
            int sum = 0;
            vector<int>S;
            REP(i,n)if(bit &(1<<i))S.push_back(i);
            REP(i,(int)S.size()){sum += A[S[i]];}
            if(sum == m ){flag = true;break;}
        }
        if(flag){cout << "yes" << endl;}
        else{cout << "no" << endl;}
    }
    return 0;
}