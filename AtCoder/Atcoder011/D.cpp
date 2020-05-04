#include "bits/stdc++.h"
using namespace std;

int main() {
	long long N, D, X, Y;
	cin >> N >> D >> X >> Y;
	if (X < 0) X = -X;
	if (Y < 0) Y = -Y;
    //割り切れない場合はたどり着けない
	if (X % D != 0 || Y % D != 0) {
		cout << 0 << endl;
		return 0;
	}
	X /= D, Y /= D;
    //道の歩数の偶奇が違ってもたどり着けない
	if ((X + Y) % 2 != N % 2) {
		cout << 0 << endl;
		return 0;
	}
	long long A = (X + Y + N) / 2, B = (X - Y + N) / 2;
	double ANS = 1.0;
    //P:とおる道の数
	for (double P = 1; P <= N; P++) {
		ANS *= 0.25;
		if (P <= A) ANS *= (P + N - A) / P;
		if (P <= B) ANS *= (P + N - B) / P;
	}
	printf("%.12lf\n", ANS);
}
