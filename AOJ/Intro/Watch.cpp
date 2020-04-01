#include<bits/stdc++.h>
using namespace std;

int main(){
    int S;
    scanf("%d",&S);
    printf("%d:%d:%d\n",S/3600,(S/60)%60,S%60);
}