#include<bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    while(1){
        scanf("%d %d",&W,&H);
        if(W==0&&H==0) break;
        for (int i=0;i<W;i++){
            if(i ==0||i == W-1){
                for (int j=0;j<H;j++){
                    printf("#");
                }
            }else{
                for(int j = 0;j<H;j++){
                    if(j==0||j==H-1){
                        printf("#");
                    }else{
                        printf(".");
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}