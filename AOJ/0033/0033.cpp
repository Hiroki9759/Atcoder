#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    
    int N,left,right,current;
    bool NO_FLG;

    scanf("%d",&N);
    for(int i=0;i<N;i++){
        //初期化
        left = -1;
        right = -1;
        NO_FLG = false;
        for(int k = 0; k < 10; k++){
            scanf("%d",&current);
            //左が逆の時
            if(left > current){
				if(right == -1){
					right = current;
				}else{
					if(right > current){
						NO_FLG = true;
						//break;
					}else{
						right = current;
					}
				}
			}else{
				left = current;
			}
        }
        if(NO_FLG==false){
        	printf("YES\n");
        }else{
        	printf("NO\n");
        }
    }
    return 0;
}
