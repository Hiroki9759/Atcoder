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
    long long H,W,K,all_count=0;
    cin >> H >> W >> K;
    char MAT[H][W];
    int row[H]={0};
    int column[W]={0};
    int MAT_NUM[H][W]={0};
    for (long long i = 0; i < H; i++)
    {
        for (long long j = 0; j < W; j++)
        {
            MAT_NUM[i][j] = 0;
            cin >> MAT[i][j];
            if(MAT[i][j]=='#'){  
                MAT_NUM[i][j]=1;
                row[i]++;
                column[j]++;
                all_count++;
            }
        }
    }
    int ans_count=0;
    vector<vector<int>>S_all;
    vector<vector<int>>T_all;

    for (int bit = 0; bit < (1<<W); ++bit) {
        vector<int>S;
        for (int j = 0; j < W; ++j) {
            if (bit & (1<<j)) { // 列挙に j が含まれるか
                S.push_back(j);
        S_all.push_back(S);

    for (int bit = 0; bit < (1<<H); ++bit) {
        vector<int>T;
        for (int i = 0; i < H; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                T.push_back(i);
        T_all.push_back(T);

    for(int i = 0;i < (int)T_all.size();i++){
        int ans = all_count;
        for (int j = 0; j < (int)T_all[i].size(); j++)
        {
            ans -=row[T_all[i][j]];

        }
        for( int k = 0; k < (int)S_all.size();k++){
            for (int j = 0; j < (int)S_all[i].size(); j++)
        {
            ans -=row[T_all[i][j]];

        }
        }
        
    }

    for (int bit = 0; bit < (1<<H); ++bit) {
        int ans = all_count;
        cout << ans;
        for (int i = 0; i < H; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                cout << "row" << i << " "<< row[i] << endl;
                ans-=row[i];

            
                            cout << "column" << j << " "<< row[i] << endl;;
                            ans-=column[j];
                            cout << "MN" << i << " "<<j <<" " <<MAT_NUM[i][j]<< endl;
                            ans+=MAT_NUM[i][j];
                                
                        }
                    }
                }           
            }
            
        }
        int ans;
        if(ans == K){ans_count++;}
        cout << ans << endl;
        cout << endl;
    }
    
    if(all_count<K){
        cout << 0 << endl;
    }else if(all_count==K){
        cout << 1 << endl;
    }else{
        cout << ans_count << endl;
    }
    return 0;
            }}}

            // ダメダメ