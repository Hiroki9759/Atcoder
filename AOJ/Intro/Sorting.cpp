#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[3];
    scanf("%d %d %d",&A[0],&A[1],&A[2]);
    sort(A,A+3);
    printf("%d %d %d\n",A[0],A[1],A[2]);
}