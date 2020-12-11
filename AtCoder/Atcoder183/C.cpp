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
    int n,k;
	cin >> n >> k;
	vector<vector<int>>T(n,vector<int>(n));
	for(int i=0;i<n;i++)for(int j=0;j<n;j++){
		cin >> T[i][j];
	}
    vector<int>index;
    for (int i = 0; i < n; i++)
    {
        index.push_back(i);
    }
    int ans = 0;
    do{
		int time=0;
		for(int i=0;i<n;i++)time+=T[index[i]][index[(i+1)%n]];
		if(time==k)ans++;
	}while(next_permutation(index.begin()+1, index.end()));
	cout << ans;
    
    return 0;
}