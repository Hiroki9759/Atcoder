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
static const int N = 100;
int main(){
    int n, p[N+1],m[N+1][N+1];
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        cin >> p[i-1]>> p[i];
    }
    for (int i = 1; i <= n; i++)m[i][i]=0;
    for (int l = 2; l <= n; l++)
    {
        for (int i = 1; i <= n-l+1; i++)
        {
            int j = i+l-1;
            m[i][j] = (1<<21);
            for (int k = i; k <= j-1; k++)
            {
                m[i][j] = min(m[i][j],m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]);
            }
            
        }
        
    }
    cout << m[1][n] << endl;
    
    
    
    return 0;
}
