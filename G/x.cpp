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


int main(int argc, char *argv[]) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。
  // ---
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.

  string line;
  int n,m;
  cin >> n>>m;
  char X[n][m];
  int Y[n][m];
  for (int i = 0; i < n; i++){
      for (int  j = 0; j < m; j++){
          cin >> X[i][j];
      }
  }
  Y[0][0]=1;
  int nowx=0;
  int nowy=0;
  int cnt=1;
  while(1){
      if(X[nowx][nowy]=='S'&& nowx+1<n){
          if(Y[nowx+1][nowy]==1){break;}
          else{Y[nowx+1][nowy]=1;cnt++;nowx++;}
      }else if(X[nowx][nowy]=='N'&& nowx-1>0){
         if(Y[nowx-1][nowy]==1){break;}
          else{Y[nowx-1][nowy]=1;cnt++;nowx--;}
      }else if(X[nowx][nowy]=='W'&& nowy+1<m){
         if(Y[nowx][nowy+1]==1){break;}
          else{Y[nowx][nowy+1]=1;cnt++;nowy++;}
      }else if(X[nowx][nowy]=='W'&&nowy-1>0){
         if(Y[nowx][nowy-1]==1){break;}
          else{Y[nowx][nowy-1]=1;cnt++;nowy--;}
      }else{break;}
  }
  cout<<cnt<<endl;
}