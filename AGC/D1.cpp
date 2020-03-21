#include <bits/stdc++.h>

#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long i64;
typedef vector<i64> vi64;
typedef vector<vi64> vvi64;
typedef pair<i64, i64> pi64;
typedef double ld;

template<class T> bool uin(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool uax(T &a, T b) { return a < b ? (a = b, true) : false; }

i64 P;
const int maxn = 6100;
i64 fact[maxn], tcaf[maxn], d2[maxn];

i64 deg(i64 x, i64 d) {
    if (d < 0) d += P - 1;
    i64 y = 1;
    while (d) {
        if (d & 1) (y *= x) %= P;
        (x *= x) %= P;
        d /= 2;
    }
    return y;
}

i64 cnk(int n, int k) {
    return fact[n] * tcaf[k] % P * tcaf[n - k] % P;
}

i64 rec(int lft, int z, int a) {
    if (z == 0) {
        i64 ans = tcaf[a] % P * d2[a] % P * rec(lft, 1, 0);
        if (lft) (ans += rec(lft - 3, 0, a + 1) * cnk(lft, 3)) %= P;
        return ans;
    }
    i64 ans = tcaf[a];
    if (a + 1 <= lft - 2) (ans += cnk(lft, 2) * rec(lft - 2, 1, a + 1)) %= P;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(10);
    cout << fixed;
#ifdef LOCAL_DEFINE
    freopen("input.txt", "rt", stdin);
#endif

    int n;
    cin >> n >> P;
    fact[0] = 1;
    for1(i, 3 * n) fact[i] = i * fact[i - 1] % P;
    forn(i, 3 * n + 1) tcaf[i] = deg(fact[i], -1);
    d2[0] = 1;
    forn(i, 3 * n) d2[i + 1] = d2[i] * 2 % P;

    cout << rec(3 * n, 0, 0) << '\n';

#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
}
