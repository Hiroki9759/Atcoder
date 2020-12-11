#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
    int R,C,K;
    cin >> R >> C >> K;
    vector<string> S(R);
    
    for (int  i = 0; i < R; i++)
    {
        cin >> S[i];
    }
    vector<vector<int>> imos(R+K*2+1,vector<int>(C+K*2));
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (S[i][j]=='x')
            {
                int x = i+K;
                int y = j+K;
                for (int i_i = 0; i_i < K; i_i++)
                {
                    imos[x+i_i-K+1][y+i_i]++;
                    imos[x+i_i-K+1][y-i_i]++;
                    imos[x-i_i+K][y+i_i]--;
                    imos[x-i_i+K][y-i_i]--;

                }
                
            }
            
        }
        
    }
    for (int i = 0; i < R+K*2; i++)
    {
        for (int j = 0; j < C+K*2; j++)
        {
            imos[i+1][j] += imos[i][j];
        }
        
    }
    int cnt = 0;

    for (int i = K*2-1  ; i < K*2-1+R-2*(K-1); i++)
    {
        for (int j = K*2-1; j < K*2-1+C-2*(K-1); j++)
        {
            if(imos[i][j]==0)cnt++;
        }
        
    }
    
    cout << cnt << endl;
    
    return 0;
}
