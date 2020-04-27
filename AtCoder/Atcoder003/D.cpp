#include <stdio.h>
#include <algorithm>
using namespace std;
using ll = long long;

int r, c, x, y, d, l;
constexpr ll mod = 1e9 + 7;
ll fact[1010], ifact[1010];
ll mod_pow(ll n, ll e) {
	ll r = 1;
	while (e) {
		if (e & 1)
			r = r * n % mod;
		n = n * n % mod;
		e >>= 1;
	}
	return r;
}
//fact ifact:階乗の配列modで割ったやつ
void Init() {
	fact[0] = 1;
	for (int i = 1; i <= 1000; i++)
		fact[i] = fact[i - 1] * i % mod;
	ifact[1000] = mod_pow(fact[1000], mod - 2);
	for (int i = 999; 0 <= i; i--)
		ifact[i] = ifact[i + 1] * ((ll)i + 1) % mod;
}
ll comb(ll n, ll r) {
	if (n < r || n < 0 || r < 0)
		return 0;
	return fact[n] * ifact[n - r] % mod * ifact[r] % mod;
}
//デスクとラックの組み合わせ
ll f(ll x, ll y) {
	if (x < 0 || y < 0)
		return 0;
	return comb(x*y, d) * comb(x*y - d, l) % mod;
}
int main() {
    //r c 区画 x y 壁で囲まれた領域　d デスク　l　サーバーラック　
	scanf("%d %d", &r, &c);
	scanf("%d %d", &x, &y);
	scanf("%d %d", &d, &l);

	Init();
    //全組み合わせ
	ll cnt = f(x,y);
    //一列空く
	cnt -= 2 * (f(x,y-1) + f(x-1,y));
    //かぶっているところの補充
	cnt += 4 * f(x-1,y-1);
    //二列空く時の補充
	cnt += f(x-2,y) + f(x,y-2);
    //１、２空き
	cnt -= 2 * (f(x-2,y-1) + f(x-1,y-2));
    //被り補充
	cnt += f(x-2,y-2);
    //mod
	cnt = (cnt % mod + mod) % mod;
    //領域がどのように設置されているか
	cnt = cnt * (r - x + 1) % mod * (c - y + 1) % mod;
	printf("%lld\n", cnt);
}
