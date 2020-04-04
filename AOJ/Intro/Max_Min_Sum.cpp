#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    scanf("%ld",&n);
    long long int A[n],sum=0;
    for (int i = 0; i<n;i++){
        scanf("%lld",&A[i]);
        sum += A[i];
    }
    sort(A,A+n);
    printf("%lld %lld %lld\n",A[0],A[n-1],sum);
}