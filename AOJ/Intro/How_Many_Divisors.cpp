#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i = a;i<b+1;i++){
        if(c%i==0){
            count++;
        }
    }
    printf("%d\n",count);
}