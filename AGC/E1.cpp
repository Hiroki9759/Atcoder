#include <bits/stdc++.h>
using namespace std;

#define Fi first
#define Se second
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define szz(x) (int)(x).size()
#define rep(i, n) for(int i=0;i<(n);i++)
typedef tuple<int, int, int> t3;

int N;
char buf[330];
int A[330];

vector <int> Get(vector <int> X) {
	if(szz(X) == 1) return {X[0]};
	else {
		int t = X.back();
		X.pop_back();
		auto w = Get(X);
		vector <int> res;
		res.pb(t);
		res.insert(res.end(), all(w));
		res.pb(-t);
		reverse(all(w));
		for(int e : w) res.pb(-e);
		return res;
	}
}

int main() {
	scanf("%d", &N);
	scanf("%s", buf);
	for(int i=0;i<1<<N;i++) A[i] = buf[i] - '0';
	int B = 1<<N;
	rep(i, B) rep(j, B) if((i&j) == j) {
		if(A[i] && A[j] == 0) {
			puts("Impossible");
			return 0;
		}
	}
	vector <int> w;
	rep(i, B) if(A[i] == 0) {
		int ok = 1;
		rep(j, i) if((i&j) == j && A[j] == 0) ok = 0;
		if(ok) w.pb(i);
	}
	vector <int> R;
	for(int e : w) {
		vector <int> t;
		rep(i, N) if(1<<i & e) t.pb(i + 1);
		auto v2 = Get(t);
		R.insert(R.end(), all(v2));
	}
	vector <pii> ans;
	int now = 0;
	ans.pb({0, 0});
	auto Move = [&](int x) {
		while(now < x) ans.pb({++now, 0});
		while(now > x) ans.pb({--now, 0});
	};
	for(int e : R) {
		int st, en;
		if(e > 0) st = e - 1, en = e;
		else st = -e, en = -e - 1;
		Move(st);
		ans.pb({st, 1});
		ans.pb({en, 1});
		ans.pb({en, 0});
		now = en;
	}
	Move(0);
	puts("Possible");
	printf("%d\n", szz(ans) - 1);
	for(pii e : ans) printf("%d %d\n", e.Fi, e.Se);
	return 0;
}
