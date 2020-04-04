#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    char ch;
    scanf("%d",&n);
    int card[4][13]={0};

    for (int i = 0; i < n; i++)
    {
        scanf("%c",&ch);
        scanf("%c %d",&ch,&x);
        if(ch == 'S'){
            card[0][x-1]=1;
        }else if(ch == 'H'){
            card[1][x-1]=1;
        }else if(ch == 'C'){
            card[2][x-1]=1;
        }else if(ch == 'D'){
            card[3][x-1]=1;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 13; j++)
        {
            if(!card[i][j]){
                if(i==0)printf("S %d\n",j+1);
                else if(i==1)printf("H %d\n",j+1);
                else if(i==2)printf("C %d\n",j+1);
                else if(i==3)printf("D %d\n",j+1);
            }
        }
        
    }
    
    
}