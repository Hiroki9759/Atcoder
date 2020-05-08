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
#include <stdio.h>
#include <queue>

using namespace std;

int n,inputed_order[41] = {0};
queue<int> Queue;

struct Node{
	Node(){
		left_child = right_child = -1;
	};
	int left_child,right_child;
};

void postORDER(Node order[],int id){
	if(order[id].left_child != -1) postORDER(order,order[id].left_child );
	if(order[id].right_child != -1) postORDER(order,order[id].right_child );
	Queue.push(id+1);
}

int findRoot(int inorder[],int left,int right){
	int root = inorder[left];
	for(int i = left+1; i <= right; i++){
		if(inputed_order[root] > inputed_order[inorder[i]]){
			root = inorder[i];
		}
	}
	return root;
}

void reconstruct(int inorder[],Node order[],int root,int left,int right){
	int root_index;
	for(root_index = left; inorder[root_index] != root; root_index++);
	if(left < root_index){
		int new_root = findRoot(inorder,left,root_index-1);
		order[root-1].left_child = new_root-1;
		if(left < root_index-1)	reconstruct(inorder,order,new_root,left,root_index-1);
	}
	if(root_index < right){
		int new_root = findRoot(inorder,root_index+1,right);
		order[root-1].right_child = new_root-1;
		if(root_index+1 < right) reconstruct(inorder,order,new_root,root_index+1,right);
	}
}

int main(){
	scanf("%d",&n);
	int preorder[n],inorder[n];
	Node order[n];

	for(int i = 0; i < n; i++){
		scanf("%d",&preorder[i]);
		inputed_order[preorder[i]] = i;
	}
	for(int i = 0; i < n; i++){
		scanf("%d",&inorder[i]);
	}

	if(n == 1){
		printf("%d\n",preorder[0]);
	}else{
		reconstruct(inorder,order,preorder[0],0,n-1);
		postORDER(order,preorder[0]-1);
		while(!Queue.empty()){
			if(Queue.size() != 1){
				printf("%d ",Queue.front());
				Queue.pop();
			}else{
				printf("%d\n",Queue.front());
				Queue.pop();
			}
		}
	}

}

