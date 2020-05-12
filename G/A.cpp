#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 500000
#define SENTINEL 2000000000
#define NIL -1
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main(){
    int N,r,item_price,sum=0,cnt=0;
    string item,now_item;
    cin >> N;
    
    for(int i = 0;i < N;i++){
        
        cin >> r;
        vector<pair<string,int> >F(r);
        for(int j = 0; j < r; j++){
            cin >> item;
            cin >> item_price;
            F[i] = make_pair(item,item_price);
        }
        std::cout << "Case #" << i+1 << endl;
        sort(F.begin(),F.end());
        for (int k = 0; k < r; k++)
        {   
            if(k = 0){
                sum = 0;
                cnt = 0;
                now_item=F[0].first;
                sum += F[0].second;
                cnt++;
                // cout << now_item << " ";
                break;
            }
            if(now_item!=F[k].first){
                // cout << sum/cnt << endl;
                sum = 0;
                cnt = 0;
                now_item=F[k].first;
                sum += F[k].second;
                cnt++;
                // cout << now_item << " ";
                
            }else{
                sum +=F[k].second;
                cnt++;
                // cout << F[k].second << " ";   
            } 
        }
        std::cout << endl;

    }


    
    return 0;
}