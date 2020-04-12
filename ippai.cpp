#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i>(n); i--)
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
