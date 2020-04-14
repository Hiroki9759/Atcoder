#include <stdio.h>
long long p = 1000000007;
long long rui(long long rui_a, long long rui_b) {
	if (rui_b == 0)return 1;
	if (rui_b == 1)return rui_a % p;
	long long rui_c;
	rui_c = rui(rui_a, rui_b / 2);
	rui_c = rui_c * rui_c % p;
	if (rui_b % 2) {
		return rui_c * rui_a % p;
	}
	return rui_c;
}
long long n, k, x, y, z;
long long m[100001];
long long ans[100001];
int main() {
	scanf("%lld%lld", &n, &k);
	m[1] = 1;
	for (long long i = 2; i <= k; i++) {
		// z = 0;
		for (long long j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				if ((i / j) % j == 0)m[i] = 0;
				else m[i] = -m[i / j];
				z = 1;
				break;
			}
		}
		if (z == 0)m[i] = -1;
	}
	z = 0;
	for (long long i = 1; i <= k; i++) {
		x = k / i;
		x = rui(x, n);
		y = 1;
		while (y * y < i) {
			if (i % y == 0) {
				ans[y] += x * m[i / y];
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
	for (int i = 1; i <= k; i++) {
		z += ans[i] * i;
		z %= p;
	}
	printf("%lld\n", z);
}
