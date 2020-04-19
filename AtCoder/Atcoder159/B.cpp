#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    char c;
    int index=0;
    string S_inv;
    cin >> S_inv;
    string S = S_inv;
    reverse(S_inv.begin(),S_inv.end());
    index = S.size();
    index--;
    bool tf = true;
    for(int i = 0;i <= index;i++){
        if(S[i]!=S_inv[i]) tf = false;
        if(i <= (index-1)/2){
           // printf("%c%c\n",S[i],S_inv[i+(index+3)/2]);
            if(S[i] != S_inv[i+(index+3)/2]) tf = false;
        }
        if(i <= index && i >= (index+3)/2){
            //printf("%c%c\n",S[i],S_inv[i-(index+3)/2]);
            if(S[i] != S_inv[i-(index+3)/2]) tf = false;
        }
    }
    if(tf) printf("Yes");
    else printf("No");

    return 0;
}