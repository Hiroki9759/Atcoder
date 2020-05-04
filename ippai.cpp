#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP3(i,x,n) for(int i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();




//最大公約数
int gcd(int x,int y){
    if (x < y) swap(x,y);
    while(y>0){
        int r = x % y;  x = y; y = r;
    }
    return x;
}

//素数判定
bool isprime(int x){
    if (x ==2) return true; 
    if (x % 2 == 0 || x < 2) return false;
    int i = 3;
    while (i <= sqrt(x)){
        if (x%i==0) return false; i += 2;
    }
    return true;
}

//最大利益の更新判定
long long int maxv(long long int R[],long long int n){
    long long minv = pow(10,10);
    long long  maxv = -pow(10,10);
    REP(j,n){
        maxv = max(maxv,R[j]- minv);
        minv = min(minv,R[j]);
    } 
    return maxv;
}

//挿入ソート
void insertionSort(ll N,ll A[]){
    for (ll i = 0; i < N; i++){
        ll v = A[i];
        ll j = i-1;
        while (j>=0&&A[j]>v){
            A[j+1] = A[j];
            j--;    
    }
        A[j+1] = v;
        for (ll k = 0; k < N-1; k++){
            printf("%lld ",A[k]);
        }
        printf("%lld\n",A[N-1]);
    }
    return ;
}

//バブルソート
void bubblesort(ll n,ll A[]){
    int flag = 1;
    ll i = 0;
    int count = 0;
    while(flag){
        flag = 0;
        REP3(j,n-1,i){
            if(A[j] < A[j-1]){
                swap(A[j-1],A[j]);
                flag = 1;
                count++;
            } 
        }
        i++;
    }
    REP(k,n-1){printf("%lld ",A[k]);}
    printf("%lld\n",A[n-1]);
    printf("%d\n",count);
}

//選択ソート
void selectionsort(ll N,ll A[]){
    ll minj,count = 0;
    REP(i,N){
        minj = i;
        REP2(j,i,N){
            if(A[j]<A[minj]){
                minj = j;
            }
        }
        if(A[i]!=A[minj]){
            swap(A[i],A[minj]);
            count++;
        }   
    }
    REP(k,N-1){printf("%lld ",A[k]);}
    printf("%lld\n",A[N-1]);
    printf("%d\n",count);
}
//シェルソートcout注意
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

//二分累乗法を使ったmodpow
const ll MOD = 1000000007;
const ll MOD_2 = 998244353;
ll modpow (ll radix,ll index){
    if(index == 0)return 1;
    if(index == 1)return radix%MOD;
    ll c;
    c = modpow(radix,index/2);
    c = c * c % MOD;
    if(index % 2){
        return c * radix % MOD;
    }else{
        return c;
    }
}

//桁をvectorに入れる
vector<ll> GetDigit(ll num){
    vector<ll>kakuketa;
    while(num!=0){
        ll keta =num%10;
        kakuketa.push_back(keta);
        num /= 10;  
    }
    return kakuketa;
}

//固定小数点表記を操る
//cout << std::fixed << std::serprecision(15) << y出力 << endl;

//bitDP を用いた巡回セールスマン問題
/*・1≤n≤201≤n≤20
・0≤dist[i][j]≤10000≤dist[i][j]≤1000
・dist[i][i]=0dist[i][i]=0
・dist[i][j]=dist[j][i]dist[i][j]=dist[j][i]
#include <iostream>
#include <bitset>
using namespace std;

const int INF = 100000000; // 十分大きな値

// 入力 
int N;
int dist[21][21];

// メモ再帰 //
int dp[(1<<20) + 1][21]; // dpテーブルは余裕をもったサイズにする
int rec(int bit, int v)
{
    // すでに探索済みだったらリターン
    if (dp[bit][v] != -1) return dp[bit][v];

    // 初期値
    if (bit == (1<<v)) {
        return dp[bit][v] = 0;
    }

    // 答えを格納する変数
    int res = INF;

    // bit の v を除いたもの
    int prev_bit = bit & ~(1<<v);

    // v の手前のノードとして u を全探索
    for (int u = 0; u < N; ++u) {
        if (!(prev_bit & (1<<u))) continue; // u が prev_bit になかったらダメ

        // 再帰的に探索
        if (res > rec(prev_bit, u) + dist[u][v]) {
            res = rec(prev_bit, u) + dist[u][v];
        }
    }

    return dp[bit][v] = res; // メモしながらリターン
}

int main()
{
    // 入力
    cin >> N;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> dist[i][j];
        }
    }

    // テーブルを全部 -1 にしておく (-1 でなかったところは探索済)
    for (int bit = 0; bit < (1<<N); ++bit) for (int v = 0; v < N; ++v) dp[bit][v] = -1;

    // 探索
    int res = INF;
    for (int v = 0; v < N; ++v) {
        if (res > rec((1<<N)-1, v)) {
            res = rec((1<<N)-1, v);
        }
    }
    cout << res << endl;
}
*/
