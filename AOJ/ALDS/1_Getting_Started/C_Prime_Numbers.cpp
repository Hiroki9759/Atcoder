#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

bool isprime(int x){
    if (x ==2) return true; 
    if (x % 2 == 0 || x < 2) return false;
    int i = 3;
    while (i <= sqrt(x)){
        if (x%i==0) return false;
        i += 2;
    }
    return true;
}

int main(){

    int n,x,count= 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n",&x);
        if(isprime(x))  count++;

    }
    printf("%d\n",count);
    return 0;
}