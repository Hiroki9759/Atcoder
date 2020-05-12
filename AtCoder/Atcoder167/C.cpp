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
struct Item{
    ll cost;vector<ll>A;
};
Item items[13];
ll C[13][13],G[13][13];

int main(){
    ll N,M,X,a;
   
    cin >> N >> M >> X;
    vector<ll> c(N);
    vector<ll> sum_rikaido_MAX(M,0);

    ll A[N][M];
    for (ll i = 0; i < N; i++)
    {
        cin >> c[i];
        
        for (ll j = 0; j < M; j++)
        {
            cin >> a;
            A[i][j] = a;
            sum_rikaido_MAX[j]+=a;
        }
    }
    for(int i = 0;i < M;i++){
        if(sum_rikaido_MAX[i]<X){
            cout << "-1" << endl;
            return 0;
        }
    }
    int a = 0,b=0,c=0;
    while(1){
        for(int i = 0;i<M;i++)
            C[a][]
    }


    return 0;
}