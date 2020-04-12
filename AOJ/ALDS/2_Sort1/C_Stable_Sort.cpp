// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// #define REP(i,n) for(int i=0; i<(n); i++)
// #define REP2(i,x,n) for(int i=x; i<(n); i++)
// #define REP3(i,x,n) for(int i=x; i>(n); i--)
// #define ALL(n) begin(n),end(n)
// struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
// const long long INF = numeric_limits<long long>::max();


// void bubblesort(ll N,vector <string> A){
//     for(int i=0;i<N-1;i++){
//         for(int j=N-1;j>i;j--){
//             if(A[j][1]<A[j-1][1]) swap(A[j],A[j-1]);
//         }
//     }
// }

// void selectionsort(ll N,vector <string> A){
//     int mini;
//     for(int i=0;i<N;i++){
//         mini = i;
//         for(int j=i;j<N;j++){
//             if(A[j][1]<A[mini][1]) mini = j;
//         }
//         if(mini != i) swap(A[i],A[mini]);
//     }
// }

// int main(){
//     int N,mini;
//     cin >> N;
//     vector <string> data1(N),data2(N);
//     REP(i,N){cin>>data1[i];data2[i]=data1[i];}
//     bubblesort(N,data1);
//     selectionsort(N,data2);
//     for(int i=0;i<N;i++) cout << (i!=0?" ":"") << data1[i];
//     cout << endl << "Stable" << endl;
//     for(int i=0;i<N;i++) cout << (i!=0?" ":"") << data2[i];
//     if(data1==data2) cout << endl << "Stable" << endl;
//     else cout << endl << "Not stable" << endl;
// }
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n,mini;
  cin >> n;
  vector <string> data1(n),data2(n);
  for(int i=0;i<n;i++){
    cin >> data1[i];
    data2[i] = data1[i];
  }
  for(int i=0;i<n-1;i++){
    for(int j=n-1;j>i;j--){
      if(data1[j][1]<data1[j-1][1]) swap(data1[j],data1[j-1]);
    }
  }
  for(int i=0;i<n;i++){
    mini = i;
    for(int j=i;j<n;j++){
      if(data2[j][1]<data2[mini][1]) mini = j;
    }
    if(mini != i) swap(data2[i],data2[mini]);
  }
  for(int i=0;i<n;i++) cout << (i!=0?" ":"") << data1[i];
  cout << endl << "Stable" << endl;
  for(int i=0;i<n;i++) cout << (i!=0?" ":"") << data2[i];
  if(data1==data2) cout << endl << "Stable" << endl;
  else cout << endl << "Not stable" << endl;
}
