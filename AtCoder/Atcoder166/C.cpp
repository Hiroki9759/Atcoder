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
    ll N,M,ans=0;
    cin >> N >> M;
    vector<ll> A(M,0);vector<ll>B(M,0);
    vector<ll>H(N,0);
    vector<bool>heighest(N,true);
    REP(i,N){
        cin >> H[i];
    }
    REP(i,M){
        cin >> A[i] >> B[i]; 
    }
    for(ll i = 0; i < N;i++){
        if(heighest[i]){
            for(ll j = 0;j < M; j++){
                if(i == A[j]-1){
                    if(H[i]<=H[B[j]-1]){heighest[i]=false;}
                    else{heighest[B[j]-1]=false;}
                }
                if(i == B[j]-1){
                    if(H[i]<=H[A[j]-1]){heighest[i]=false;}
                    else{heighest[A[j]-1]=false;}
                }
            }
        }
    }
    REP(i,N){
        if(heighest[i]){ans++;}
    }
    cout << ans << endl;


    return 0;
}