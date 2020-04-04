#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);std::cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    string T,W;
    int count = 0;
    std::cin >> W;
    for(int i=0,l=W.size();i<l;i++){
        if(W[i]>='A'&&W[i]<='Z') W[i]+=('a'-'A');
    }
    while(cin>>T){
        if(T=="END_OF_TEXT") break;
        for (int i = 0,l=T.size(); i < l; i++)
        {
            if(T[i]>='A'&&T[i]<='Z') T[i]+=('a'-'A');
        }
        if(W==T)count++;
    }
    cout << count << endl;
}