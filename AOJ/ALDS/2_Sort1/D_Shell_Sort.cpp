#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

int cnt;

void insertionSort(int N,int *A,int g){
    REP2(i,g,N){
        int v = A[i];
        int j = i-g;
        while(j >= 0 && A[j]>v){
            A[j+g]= A[j];
            j -= g;
            cnt++;
        }
        A[j+g] = v;
    }
}
void shellSort(int N,int *A){
    cnt = 0;
    int r = 1;
    vector<int>G;
    while(r <= N){
        G.push_back(r);
        r *= 2;
    }
    int m = G.size();
    reverse(G.begin(),G.end());
    cout << m << endl;
    REP(i,m) cout << G[i]<<" \n"[i == m-1];
    REP(i,m) insertionSort(N,A,G[i]);
    cout << cnt << endl;
}


int main(){
    int N;
    cin >> N;
    int A[N];
    REP(i,N)cin >> A[i];
    shellSort(N,A);
    REP(k,N)cout << A[k] << endl;
    return 0;
}


