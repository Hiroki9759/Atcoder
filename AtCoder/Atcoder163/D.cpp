#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();


const long long M = 1000000007;

long long h,w,a,b;

long long mod_pow(long long a, long long b)
{
  if (b == 0) return 1;
  long long ret = mod_pow(a, b/2);
  ret = ret * ret % M;
  if (b % 2 == 1) ret = ret * a % M;
  return ret;
}

long long comb(long long a, long long b)
{
  if (b > a - b) return comb(a, a - b);

  long long num = 1;
  long long denom = 1;

  for (long i = 1; i <= b; i++) {
    num = num * (a - i + 1) % M;
    denom = denom * i % M;
  }

  return num * mod_pow(denom, M-2) % M;
}


int main(){
    ll N,K;
    scanf("%lld%lld",&N,&K);
    ll sum= 0;
    ll sum_N=1,sum_K=1,sum_KK=0;
    N++;
    while(N!=1){
      sum_N *=N;
      sum_N%=M;
      N--;
    }
    for (ll i = K+1; i > 0; i--)
    {
      ll ka = i;
      sum_K = 1;
      while(ka!=1){
        sum_K *= ka;
        sum_K %= M;
        ka--;
      }
      sum_KK+= sum_K;
      sum_KK%= M;
    }
    
    printf("%lld",(sum_N-sum_KK)%M);
    return 0;
}