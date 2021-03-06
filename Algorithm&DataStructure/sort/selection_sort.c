#include <stdio.h>

//選択ソート
int selectionSort(int A[],int N){
    int i,j,t,sw = 0,minj;
    for( i; i<N-1; i++){
        minj = i;
        for ( j = 0; j < N; j++)
        {
            if (A[j]<A[minj])
            {
                minj = j;
            }
        }
        t = A[i]; 
        A[i] = A[minj];
        A[minj] = t;
        if (i != minj)
        {
            sw++;
        }
        return sw;
    }
}

int main(){
    int N,i,sw;
    int A[100];

    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d",&A[i]);
    }
    sw = selectionSort(A,N);
    for ( i = 0; i < N; i++)
    {
        if (i>0)
        {
            printf("");
        }
        printf("%d",A[i]);
    }
    
    printf("\n");
    printf("%d\n",sw);

    return 0;
}