#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{   
    
    string str;
  
    //空白も含めて1行まるごとを文字列として受け取るためにはgetline関数を使う
    getline(cin,str);

    REP(i,(int)str.size()){
            
        if(islower(str[i])) printf("%c",toupper(str[i]));
        else if(isupper(str[i])) printf("%c",tolower(str[i]));
        else printf("%c",str[i]);  
        if(str[i]==EOF)break;
    }
    printf("\n");
}