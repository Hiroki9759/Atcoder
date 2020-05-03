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
vector<int> swapfunction(ll amari,vector<int> A){
    for(int i = 0; i<amari;i++){
        swap(A[i],A[i+1]);
    }
    return A;
}
int main(){
    
    ll N;
    cin >> N;
    ll amari = N%5;
    ll shou  = N/5;
    ll samari= shou%6;
    vector<int> ans;
     
    if(samari==0){
        ans = swapfunction(amari,{1,2,3,4,5,6}); 
    }else if(samari==1){
        ans = swapfunction(amari,{2,3,4,5,6,1});
    }else if(samari==2){
        ans = swapfunction(amari,{3,4,5,6,1,2});
    }else if(samari==3){
        ans = swapfunction(amari,{4,5,6,1,2,3});    
    }else if(samari==4){
        ans = swapfunction(amari,{5,6,1,2,3,4});
    }else if(samari==5){
        ans = swapfunction(amari,{6,1,2,3,4,5});
    }
    for(int i = 0; i< 6;i++){
    cout << ans[i];
    }
    cout << endl;
    
    return 0;
}