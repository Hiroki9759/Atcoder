#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

ll p = 1000000007;

ll modpow (ll radix,ll index){
    if(index == 0)return 1;
    if(index == 1)return radix%p;
    ll c;
    c = modpow(radix,index/2);
    c = c * c % p;
    if(index % 2){
        return c * radix % p;
    }else{
        return c;
    }
}
// m[i]はk=iのときの最大公約数の総和
ll N,K,x,y,z,m[100001],ans[100001];
int main(){
    scanf("%lld%lld",&N,&K);
    m[1] = 1;
    for(ll i = 2; i<=K;i++){
        for(ll j = 2;j*j <= i;j++){
            //iがjの倍数の時(被り対策)
            if(i%j==0){
                //iがj^2の倍数->もう足す必要ないので０
                if((i/j)%j == 0) m[i] = 0;
                //iがjの●倍   ->●の分だけ引く
                else m[i] = - m[i/j];
                z = 1;
                break;
            }
        }
        //iが素数のとき
        if(z == 0) m[i] = -1;
    }
    z = 0;
    for(ll i = 1; i <= K; i++){
        x = K / i;
        x = modpow(x,N);
        y = 1;
        while(y*y < i){
            if(i%y == 0){
                ans[y] += x * m[i/y];
                ans[y] += p;
                ans[y] %= p;
                ans[i / y] += x * m[y];
				ans[i / y] += p;
				ans[i / y] %= p;

			}
			y++;
		}
		if (y * y == i) {
			ans[y] += x * m[y];
			ans[y] += p;
			ans[y] %= p;
		}
	}
	for (int i = 1; i <= K; i++) {
		z += ans[i] * i;
		z %= p;
	}
	printf("%lld\n", z);
}
