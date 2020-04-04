#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n,t_score=0,h_score=0;
    string t_card,h_card;
    cin >> n;
    REP(i,n){
        cin >>t_card >> h_card;
        if(t_card==h_card){
            h_score++;
            t_score++;
        }else if(t_card>h_card){
            t_score+=3;
        }else{
            h_score+=3;
        }
    }
    cout << t_score << " " << h_score << endl;
}