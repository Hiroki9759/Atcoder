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
    ll A,B,N;
    cin >> A >>B >> N;
    ll C=0;

    if(N<B){cout<< ll((double)A*(double)N/(double)B) << endl; }
    else{
        
        C = B-1;
        cout << ll((double)A*(double)C/(double)B) -A*ll(double(C)/double(B)) << endl;
    }

    // ll left = 1;
    // ll right = N;
    // ll l_ans = 0;
    // ll r_ans = 0;

    // while(left<right){
    //     ll mid = left+(right-left)/2;
    //     l_ans = ll((double)A*(double)left/(double)B) -A*ll(double(left)/double(B));
    //     cout << l_ans << "l" << endl;
    //     r_ans = ll((double)A*(double)right/(double)B) -A*ll(double(right)/double(B));
    //     cout << r_ans << "r" << endl;
    //     if(l_ans>r_ans){left=left; right=right/2;}
    //     else if(r_ans>l_ans){left = right/2+1;right = right;}
    //     else{break;}
    // } 
    
    // cout << l_ans << endl;
    
    return 0;
}
