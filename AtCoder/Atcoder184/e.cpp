#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define zero_pad(num) setfill('0') << std::right << setw(num)
#define space_pad(num) setfill(' ') << std::right << setw(num)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    int n;
    cin >> n;
    char T[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>T[i][j];
        }
    }
    string ans = "No";
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        cnt=0;
        for (int j = 0; j < n; j++)
        {
            if(T[i][j]=='o'){cnt++;}
            
        }
        
        if(cnt==n){ans="Yes";}
    } 
    cnt=0;
    if(ans=="No"){
       for (int i = 0; i < n; i++)
        {
            cnt=0;
            for (int j = 0; j < n; j++)
            {
                if(T[j][i]=='o'){cnt++;}
                
            }
            
            if(cnt==n){ans="Yes";}
        }  
    }
    cnt=0;
    if(ans=="No"){
        cnt= 0;
        for (int j = 0; j < n; j++)
        {
            if(T[j][j]=='o'){cnt++;}
        }
        
        if(cnt==n){ans="Yes";}
    }
    if(ans=="No"){
        cnt= 0;
        for (int j = 0; j < n; j++)
        {
            if(T[j][n-j-1]=='o'){cnt++;}
        }
        if(cnt==n){ans="Yes";}
    }
    
    cout << ans << endl;
    return 0;
}

