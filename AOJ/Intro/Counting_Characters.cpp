#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int counter[26]={};
    string str;
    while(getline(cin,str)){
        REP(i,str.size()){
            if(str[i]>='a'&&str[i]<='z')counter[str[i]-'a']++;
            else if(str[i]>='A'&&str[i]<='Z')counter[str[i]-'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c : %d\n",i+'a',counter[i]);
    }
    return 0;
    
}