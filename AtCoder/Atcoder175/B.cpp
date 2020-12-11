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
int main(){
    ll N;
    cin >> N;
    vector<ll> L(N);
    for (ll i = 0; i < N; i++)
    {
        cin>>L[i];
    }
    int count = 0;
    for (ll i = 0; i < N; i++)
    {
        for (ll j = i+1; j < N; j++)
        {
            for (ll k = j+1; k < N; k++)
            {
                if(L[i]==L[j]||L[j]==L[k]||L[k]==L[i]){
                    continue;
                }else{
                    if(L[i]+L[j]>L[k]&&L[j]+L[k]>L[i]&&L[k]+L[i]>L[j]){
                        count++;
                    }
                }
            }
            
        }
        
    }
    
    cout << count << endl;
    return 0;
}
