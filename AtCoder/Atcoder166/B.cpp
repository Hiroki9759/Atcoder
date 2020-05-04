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

    ll N,K;
    ll sum = 0;
    bool snuke = false; 
    cin >> N >> K;
    vector<ll> d(K,0);
    ll A[N]={};
    REP(i,N)A[i]=0;
    for(ll i = 0; i< K ; i++){
        ll ak=0;
        cin >> ak;
        for(ll j = 0; j < ak;j++){
            int d_i=0;
            cin >> d_i;
           
            A[d_i-1]++;
            
        }
    }
    
    for(ll j = 0 ;j < N;j ++ ){
        if(A[j]==0){
            sum++;
        }
    }

    cout <<  sum << endl;
    return 0;
}