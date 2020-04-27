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
//桁をvectorに入れる
vector<ll> GetDigit(ll num){
    vector<ll>kakuketa;
    while(num!=0){
        ll keta =num%10;
        kakuketa.push_back(keta);
        num /= 10;  
    }
    return kakuketa;
}
int main(){
    ll S;
    string A;
    ll cnt=0;
    cin >> A;
    for(ll i = 0;i < A.size()-3;i++){
        for(ll j = 4; j <A.size()-i+1; j ++){
            // ll num = std::stoll(A.substr(i,j));
            string subs = A.substr(i,j);
            istringstream ss;
            ss = istringstream(subs);
            ll num;
            ss >> num;
            if(num%2019==0){
                cnt++;
                if(A[i+j]==0)
                i++;}
        }
        
    }
    printf("%lld",cnt);
    return 0;
}