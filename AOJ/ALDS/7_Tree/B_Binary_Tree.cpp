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


struct Node{ll parent,left,right;};
struct Node T[MAX];
ll D[MAX],N,H[MAX];

//二分木のノードの高さ
ll setHeight(ll u){
    ll h1=0,h2=0;
    if(T[u].right!=NIL){
        h1 = setHeight(T[u].right)+1;
    }
    if(T[u].left!=NIL){
        h2 = setHeight(T[u].left)+1;
    }
    return H[u] = max(h1,h2);
}

//u:ノード番号　D:各ノードの深さ 右の兄弟の深さと、最左のこの深さを探索　
void setDepth(ll u,ll p){
    if(u==NIL)return;
    D[u] = p;
    setDepth(T[u].right,p+1);
    setDepth(T[u].left, p+1);
}
//節点uの兄弟を探す
ll getSibling(ll u){
    if(T[u].parent == NIL)return NIL;
    if(T[T[u].parent].left!=u&&T[T[u].parent].left!=NIL){
        return T[T[u].parent].left;
    }
    if(T[T[u].parent].right!=u&&T[T[u].parent].right!=NIL){
        return T[T[u].parent].right;
    }
    return NIL;
}

void printChildren(ll u){
    ll i,c;
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].parent << ", ";
    cout << "sibling = " << getSibling(u) << ", ";
    int deg = 0;
    if(T[u].left!=NIL)deg++;
    if(T[u].right!=NIL)deg++;
    cout << "degree = " << deg << ", ";
    cout << "depth = " << D[u] << ", ";
    cout << "height = " << H[u] << ", ";
    if(T[u].parent == NIL)cout << "root"<<endl;
    else if(T[u].left == NIL&&T[u].right==NIL)cout << "leaf"<<endl;
    else cout << "internal node"<<endl;
    
    // cout << "[";
    // for(ll i = 0,c = T[u].left;c != NIL;i++,c = T[c].right){
    //     if(i)cout <<", ";
    //     cout << c;
    // }
    // cout << "]" << endl;
    // ll c = T[u].left;
    // while(c != NIL){
    //     cout << c;
    //     c = T[c].right;
    // }
}


int main(){
    ll i,j,d,v,c,left,right,root=0;
    cin >> N;
    //初期化
    REP(i,N){
        T[i].parent  = NIL;
    }

    REP(i,N){
        cin >> v >> left >> right;
        T[v].left = left;
        T[v].right = right;
        if(left!=NIL)T[left].parent = v;
        if(right!=NIL)T[right].parent = v;
    }
    REP(i,N){
        if(T[i].parent == NIL)root = i;
    }
    setDepth(root,0);
    setHeight(root);
    REP(i,N)printChildren(i);
    return 0;
}