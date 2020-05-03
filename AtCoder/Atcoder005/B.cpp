#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
ll MOD = 10007;
void Fibonacci(ll A[1000000]){
    A[0] = 0;
    A[1] = 0;
    A[2] = 1;
    for(ll i = 3; i <1000000;i++){
        A[i] = 0;
        A[i] = A[i-1]+A[i-2]+A[i-3];
        A[i]%=10007;
    }
}

int main(){
    ll N;
    cin >> N;
    ll A[1000000] = {0};
    Fibonacci(A);
    cout << A[N-1];
    
    return 0;
}