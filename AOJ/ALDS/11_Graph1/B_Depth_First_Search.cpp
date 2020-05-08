// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// static const int N = 100;
// static const int WHITE = 0;
// static const int GRAY = 1;
// static const int BLACK = 2;

// int n,M[N][N];
// int color[N],d[N],f[N],tt;
// int nt[N];


// int next(int u){
//     for(int v = nt[u];v < n;v++){
//         nt[u] = v +1;
//         if(M[u][v])return v;
//     }
//     return -1;
// }


// void dfs_visit(int r){
//     for(int i = 0;i<n;i++)nt[i]=0;
//     stack<ll>S;
//     S.push(r);
//     color[r] = GRAY;
//     d[r] = ++tt;

//     while(!S.empty()){
//         int u = S.top();
//         int v = next(u);
//         if(v!=-1){
//             if(color[v]==WHITE){
//                 color[v] =GRAY;
//                 d[v] = ++tt;
//                 S.push(v);
//             }
//         }else{
//             S.pop();
//             color[u] = BLACK;
//             f[u] = ++tt;
//             S.push(v);
//         }
//     }   
// }

// void dfs(){

//     for(int i=0;i<n;i++){
//         color[i]=WHITE;
//         nt[i] = 0;
//     }
//     tt =0;

//     for(int u = 0;u<n;u++){
//         if(color[u] == WHITE)dfs_visit(u);
//     }
    
//     for(int i = 0;i < n;i++){
//         cout << i+1 <<" " << d[i] << " " << f[i] << endl;
//     } 
// }


// int main(){
//     int u;
//     int k;
//     int v;

//     cin >> n;
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n;j++)M[i][j]=0;
//     }
    
//     for(int i = 0;i<n;i++){   
//         cin >> u; 
        
//         cin >> k;  
        
//         u=u-1;
//         for(int j = 0;j<k;j++){
//             cin >> v;
//             v=v-1;
//             if(v>=0){
//                 M[u][v] = 1;
//             }
//         }
//         if(i==n-1)break;
//     }  
    
//     dfs();

//     return 0;   
// }
/*
 * b.cc: 
 */
#include<bits/stdc++.h>
using namespace std;

/* constant */

const int MAX_N = 100;

/* typedef */

typedef vector<int> vi;

/* global variables */

vi nbrs[MAX_N];
int ds[MAX_N], fs[MAX_N];

/* subroutines */

int dfs(int u, int t) {
  ds[u] = ++t;

  for (int i = 0; i < nbrs[u].size(); i++) {
    int &v = nbrs[u][i];
    if (! ds[v]) t = dfs(v, t);
  }

  return (fs[u] = ++t);
}

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    u--;

    for (int j = 0; j < k; j++) {
      int v;
      cin >> v;
      v--;
      nbrs[u].push_back(v);
    }
  }

  int t = 0;
  for (int i = 0; i < n; i++)
    if (! ds[i]) t = dfs(i, t);

  for (int i = 0; i < n; i++)
    printf("%d %d %d\n", i + 1, ds[i], fs[i]);

  return 0;
}
