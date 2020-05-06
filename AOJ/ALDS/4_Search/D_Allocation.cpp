#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
#define MAX 1000000

int N,K;
ll T[MAX];

int check(ll P){
    int i = 0;
    for (int j = 0; j < K; j++)
    {
        ll s = 0;
        while(s+T[i]<=P){
            s +=T[i];
            i++;
            if(i==N){return N;}
        }
    }
    return i;
}
//二分探索法
int BNF(){
    ll left = 0;
    ll right = 100000*10000;
    ll mid;
    while(right-left>1){
        mid = (left+right)/2;
        int v = check(mid);
        if(v>=N){
            right = mid;
        }else{
            left = mid;
        }
    }
    return right;
}


int main(){
    cin >> N >> K;
    REP(i,N){
        cin >> T[i];
    }
    ll ans = BNF();
    cout << ans << endl;
    return 0;
}