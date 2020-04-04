#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
using ll = long long;
using p = pair<int,int>;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    int k;
    cin >> k;
    vector<ll> a;
    for (int i = 1; i <= 9; i++) a.push_back(i);
    while(1){
        if(k <= a.size()){
            cout << a[k-1] << endl;
            return 0;
        }
        k -= a.size();
        vector<ll> old;
        swap(old,a);
        for(ll x : old){
            for(int i = -1;i<=1;++i){
                int d = x%10 + i;
                if(d<0 || d > 9)continue;
                ll nx = x*10 + d;
                a.push_back(nx);
            }
        }
    }
    return 0;
}