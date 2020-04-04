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
    int q;
    cin >> str;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        if(s == "print"){
            int a, b;
            cin >> a >> b;
            cout << str.substr( a, b - a + 1) << endl;
        } else if(s == "reverse"){
            int a, b;
            cin >> a >> b;
            reverse( str.begin() + a, str.begin() + b + 1);
        } else {
            int a, b;
            string p;
            cin >> a >> b >> p;
            str.replace( a, b - a + 1, p);
        }
    }
}