#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    int N;cin>>N;
    vector<int>S(N);
    REP(i,N)cin >> S[i];
    sort(S.begin(),S.end());
    int q;
    cin >> q;
    int ans=0,t;
    
    REP(i,q){
        cin>>t;
        int left = 0;int right = N;
        while(left<right){
            int middle = (left+right)/2;
            if(S[middle]<t){
                left = middle+1;
            }else if(S[middle]>t){
                right = middle;
            }else{ans++;break;}
        }
    }
    
    cout << ans << endl;
    return 0;
}