#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    long long int N,K,C,count;
    scanf("%lld%lld%lld",&N,&K,&C);
    char S[N];
    
    for(long long int i=0;i<N;i++){
        if(S[i]=='x'){
            for(int j=i;i<2*i;j++) S[j]='x';
            i+=i;
        }else if(S[i]=='o'){
            for(int j=i;j<i+C;j++) S[j]='x';
            i+=C;
        }
        
    }
    for(long long int i=0;i<N;i++){
        if(S[i]=='o')printf("%lld",i);
    }
    

}