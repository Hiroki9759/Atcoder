#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();


int read() {
    static char s[1 << 18]; //sの最大要素数を2^18乗に設定している　今回N<=2×10^5のためそれを超える数で設定されている
    static int i, j;
    int r = 0, t = 1, b = 0;
    while (1) {
        if (i == j) {
            //read 文字列sからn文字(sizeof(s))を読み出す
            cin.read(s, sizeof(s));
            i = 0;
            //最後の入力操作での文字数をカウント　j==0は読み込むものがなかったとき
            j = cin.gcount();
            if (j == 0) break;
        }
        int c = s[i++];
        if ('0' <= c && c <= '9') {
            //cが０〜９だったとき桁一つあげてたす r = 13 c = 4 -> r =134
            r = r * 10 + (c - '0');
            b = 1;

        } else if (c == '-') {
            //cが-のとき
            t = -1;
        } else if (b) {
            //終わったとき
            break;
        }
    }
    return r * t;
}

int main() {
    //iostream と stdioの同期状態を解除
    ios::sync_with_stdio(false);
    //cinとcoutの同期を切る
    cin.tie(0);


    int n = read();
    int a0 = read(), a1 = read();

    ll r0 = 0, r1 = max(a0, a1), r2;
    ll s = a0;

    for (int i = 2; i < n; i++) {
        //数列読み込み
        int a = read();
//隣り合う数の中でどちらを選んだ方が数値が大きくなるのかß
        if (i & 1) {
            //i%2 == 0
            r2 = max(r0 + a, s);
        } else {
            r2 = max(r0 + a, r1);
            s += a;
        }
        r0 = r1;
        r1 = r2;
    }

    cout << r1 << endl;

    return 0;
}
