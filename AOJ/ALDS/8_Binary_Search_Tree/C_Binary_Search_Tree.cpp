#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 500000
#define SENTINEL 2000000000

struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
struct Node
{
    ll key;
    Node *right,*left,*parent;
};
Node *root, *NIL;
//最小の木を探す
Node *treeMinimum(Node *x){
    while (x->left!=NIL)
    {
        x = x->left;
    }
    return x;
}
//次の節点を探す
Node *treeSuccessor(Node *x){
    if(x ->right!=NIL)return treeMinimum(x->right);
    Node *y = x->parent;
    while (y!=NIL&&x==y->right)
    {
        x=y;
        y=y->parent;
    }
    return y;
}
//節点の削除
void treeDelete(Node *z){
    Node *y; //削除する対象
    Node *x; //yの子
    //削除する節点を決める
    if(z->left==NIL||z->right==NIL)y = z;
    else y = treeSuccessor(z);
    //yの子xを決める
    if(y->left!=NIL){
        x = y->left;
    }else{
        x = y->right;
    }
    if(x != NIL){
        x->parent = y->parent;
    }
    if(y->parent==NIL){
        root = x;
    }else{
        if(y == y->parent->left){
            y->parent->left=x;
        }else
        {
            y->parent->right=x;
        }
    }
    if(y != z){
        z ->key=y->key;
    }
    free(y);
}

Node *find(Node *u,ll k){
    while(u!=NIL&&k!=u->key){
        if(k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}

void insert(ll k){
    Node *y = NIL;
    Node *x = root;
    Node *z;
    //メモリの確保
    z = (Node *)malloc(sizeof(Node));
    z -> key = k;
    z -> left = NIL;
    z -> right = NIL;

    while( x!=NIL ){
        y = x;
        if(z -> key < x ->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    z -> parent = y;
    if(y ==NIL){
        root = z;
    }else{
        if(z ->key < y->key){
            y ->left = z;
        }else{
            y ->right = z;
        }
    }
}
void PreorderWalk(Node *u){
    if(u == NIL)return;
    cout << " "<< u->key; 
    PreorderWalk(u->left);
    PreorderWalk(u->right);
}

void InorderWalk(Node *u){
    if(u == NIL)return; 
    InorderWalk(u -> left);
    cout << " "<< u->key;
    InorderWalk(u -> right);
}


int main(){
    ll n,i,x;
    string com;
    cin >> n;
    REP(i,n){
        cin >> com;
        if(com == "insert"){
            cin >> x;
            insert(x);
        }else if(com =="print"){
            InorderWalk(root);
            cout << endl;
            PreorderWalk(root);
            cout << endl;
        }else if(com[0] == 'f'){
            cin >> x;
            Node *t = find(root,x);
            if(t!=NIL){cout << "yes" << endl;}
            else{cout << "no" << endl;}
        }else if(com == "delete"){
            cin >> x;
            treeDelete(find(root,x));
        }
    }
    return 0;
}