#include <bits/stdc++.h>
using namespace std;
#define ll = long long int
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v); // 再帰的に探索
    }
}




int main(){
    long long int N,count= 0;
    string S;
    cin >> N;
    cin >> S;

    for(int i = 0;i < N-2;i++){
        for(int j = i; j<N-1;j++){
            for(int k = j;k< N;k++){
                if((j-i!=k-j)&&(S[i]!=S[j])&&(S[i]!=S[k])&&(S[j]!=S[k])){
                    
                    count++;
                }
            }
        }
    }
    printf("%lld",count);

    return 0;
}