#include<bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    while(1){
        scanf("%d %d",&W,&H);
        if(W==0&&H==0) break;
        for (int i=0;i<W;i++){
            for (int j=0;j<H;j++){
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
}