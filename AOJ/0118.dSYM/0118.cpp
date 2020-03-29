#include<bits/stdc++.h>
using namespace std;
#https://onlinejudge.u-aizu.ac.jp/problems/0118
char c[100][101];
int h,w;
void del(int a,int b,char t){
	c[a][b]='.';
	if(a>0&&c[a-1][b]==t)del(a-1,b,t);
	if(b>0&&c[a][b-1]==t)del(a,b-1,t);
	if(a<h-1&&c[a+1][b]==t)del(a+1,b,t);
	if(b<w-1&&c[a][b+1]==t)del(a,b+1,t);
	return;
}
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a){
		h=a;
		w=b;
		for(int i=0;i<a;i++){
			scanf("%s",c[i]);
		}
		int ret=0;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(c[i][j]!='.'){
					ret++;
					del(i,j,c[i][j]);
				}
			}
		}
		printf("%d\n",ret);
	}
}