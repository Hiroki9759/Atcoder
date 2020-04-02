#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    scanf("%lld",&n);
    for(long long int i=1;i<n+1;i++){
        if(i%3==0){
            printf(" %lld",i);
        }else{
            long long x = i;
            while(1){
                if(x%10==3){
                    printf(" %lld",i);
                    break;
                }
                x/=10;
                if(x==0) break;
            }
        }
    }
    printf("\n");
}