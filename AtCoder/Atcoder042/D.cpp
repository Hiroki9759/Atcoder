#include <bits/stdc++.h>

using namespace std;

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


int main()
{
  cin >> h >> w >> a >> b;
  long long result = 0;
  long long fst = comb(h - a + b - 2, b - 1);
  long long snd = comb(a + w - b - 1, a);
  for (int i = h - a; i >= 1; i--) {
    result = (result + fst * snd % M) % M;
    fst = fst * (i - 1) % M;
    fst = fst * mod_pow(i + b - 2, M - 2) % M;
    snd = snd * (h - i + w - b) % M;
    snd = snd * mod_pow(h - i + 1, M - 2) % M;
  }
  cout << result << endl;

  return 0;
}
