#include <bits/stdc++.h>
using namespace std;
#define ALL(n) begin(n),end(n)
int main(){
    const int M = 1<<18;
    int N,c,a[M];
    cin>>N;
    fill(ALL(a),M);
    for(int i=0; i<N; i++){
        cin>>c;
        *lower_bound(a,a+N,c) = c;
    }
    cout << N-(int)(lower_bound(a,a+N,M)-a) << endl;
}