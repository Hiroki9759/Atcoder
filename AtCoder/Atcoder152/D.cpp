#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(ll i=0; i<(n); i++)
int main(){
    ll N,ans=0;
    cin >> N;
    ll sum[11][11]={0};
    for(int i = 1;i <= N;i++){
        int A=i,B=i%10;
        while(A>=10)A/=10;
        sum[A][B]++;
    }
    REP(i,10)REP(j,10){
        ans+=sum[i][j]*sum[j][i];
    }
    cout << ans << endl;
}