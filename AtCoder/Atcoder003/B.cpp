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
    string S,T,atc="@atcoder";
    char buf[16];
    scanf("%s",buf);
    S = buf;
    scanf("%s",buf);
    T = buf;

    REP(i,S.size()){
        if(S[i]==T[i])continue;
        if(T[i]=='@')swap(S[i],T[i]);
        if(S[i]=='@'){
            switch (T[i])
            {
            case 'a':
            case 't':
            case 'c':
            case 'o':
            case 'd':
            case 'e':
            case 'r':
                continue;
            default:
                return !printf("You will lose\n");   
            }       
        }
        return !printf("You will lose\n");
    }
    printf("You can win\n");
    return 0;
}