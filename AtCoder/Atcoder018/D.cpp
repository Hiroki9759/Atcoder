#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();



int N,M,P,Q,R;
int a[18][18];

int sub(int s){
    int c[18] = {};
    for (int i = 0; i < N; i++)
    {
        if(!((s>>i)&1))continue;
        for (int j = 0; j < M; j++)
        {
            c[j]+=a[i][j];
        }
        
    }
    sort(c,c+M,greater<int>());
    int sum = 0;
    for (int j = 0; j < Q; j++)
    {
        sum += c[j];
    }
    return sum;
    
    
}

int main(){
    
    cin >> N >> M >> P >> Q >> R;
    for (int k = 0; k < R; k++)
    {
        int i,j,x;
        cin >> i >> j >> x;
        --i;--j;
        a[i][j] += x;
    }
    int mx = 0;
    for (int s = 0; s < (1<<N); s++)
    {
        if(__builtin_popcount(s) != P)continue;
        mx = max(mx,sub(s));

    }
    cout << mx << endl;
    
}
