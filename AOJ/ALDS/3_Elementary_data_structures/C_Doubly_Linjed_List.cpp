#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0; i<(n); i++)
//データ本体のkey,前語の要素へのそれぞれのポインタprev,next
struct Node{
    int key;
    Node *prev, *next;
};

//番兵ノード（NILのノード）はリストの先頭を示す。
//ポインタのつなぎ換えを容易にする　削除が簡単に
Node *nil;
void init(){
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}
//番兵を起点として要素が追加される　malloc:指定したサイズだけメモリを確保
//双方向リストへの要素を挿入
void insert(int key){
    Node *x =(Node *)malloc(sizeof(Node));
    x -> key=key;
    // 番兵の直後に要素を追加
    x -> next = nil -> next;
    nil -> next -> prev = x;
    nil -> next = x;
    x -> prev = nil;
}
//双方向リストの要素の探索
Node* listSearch(int key){
    Node *cur = nil -> next;//番兵の次の要素からたどる
    while(cur != nil&&cur->key!=key){
        cur = cur -> next; 
    }
    return cur;
}
//双方向リストの要素の削除
void deleteNode(Node *t){
    if(t == nil){return;}//tが番兵の場合は処理しない
    t -> prev -> next = t -> next;
    t -> next -> prev = t -> prev;
    free(t);
}
void deleteFirst(){
    deleteNode(nil -> next);
}
void deleteLast(){
    deleteNode(nil -> prev);
}
void deleteKey(int key){
    deleteNode(listSearch(key));
}
void printList(){
    Node *cur = nil ->next;
    int isf = 0;
    while(1){
        if(cur == nil) break;
        if(isf++>0){
            cout << " ";
        }
        cout << cur->key;
        cur = cur -> next;
    }
    cout << endl;
}

int main(){
    int key,n,i;
    int size = 0;
    char com[20];
    int np = 0,nd=0;
    cin >> n;
    init();
    REP(i,n){
        cin >> com >> key;
        if(com[0]=='i'){
            insert(key); np++;size++;
        }else if(com[0]=='d'){
            if(strlen(com)>6){
                if(com[6]=='F')deleteFirst();
                else if(com[6]='L')deleteLast();
            }else{
            deleteKey(key); nd++;
            }
            size--;
        }
    }
    printList();
    return 0;
}