#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    long long int M=0,N=0,m_counter=0;
    long long int sum=0;
    scanf("%lld %lld",&N,&M);
    long long int A[N];
    for(long long int i=0;i<N;i++){
        scanf("%lld",&A[i]);
        // mx = max(mx,A[i]);
        sum += A[i];
    }
    printf("%lld\n",sum);
    printf("%lld\n",sum/(4.0*M));
    std::sort(A,A+N);
    for(long long int i=0;i<N;i++){
        if(A[i]>=(sum/(4.0*M))) m_counter++;
    }
    if(m_counter>=M)printf("Yes");
    else printf("No");
    
}