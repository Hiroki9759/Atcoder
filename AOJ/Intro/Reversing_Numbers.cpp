#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,A[1000];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
    
    for (int i =n-1;i>-1;i--)
    {
        if(i-n+1)printf(" ");
        printf("%d",A[i]);
    }
    printf("\n");
}