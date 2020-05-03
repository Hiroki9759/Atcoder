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
int main(){
    ll N,max=0;
    
    
    map<string ,int> smap;
    cin >> N;
    vector<string> S(N);
    REP(i,N){
        cin >> S[i];
    }
    sort(ALL(S));
    REP(i,N){
        if(smap.count(S[i])){
            smap[S[i]]++;
            if(max < smap[S[i]]){
                max = smap[S[i]];
            }
        }else{
            smap[S[i]]=1;
            if(max < smap[S[i]]){
                max = smap[S[i]];
            }
        }
    }
    for(auto i = smap.begin();i !=smap.end();++i) {

        if(i->second==max){cout << i->first << endl;}
    }

    
    return 0;
}