#include <stdio.h>

//配列の要素を順番に出力
void trace(int A[], int N){
    for(int i = 0; i<N; i++){
        if(i>0)printf("");
        printf("%d",A[i]);
    }
    printf("\n");
}

//挿入ソート
void insertionSort(int A[],int N){
    int v,j;
    for(int i; i<N; i++){
        
        v = A[i];
        j = i-1;
        while (j>=0 && A[j]>v){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=v;
        trace(A,N);
    }
}

int main(){
    int N,i,j;
    int A[100];

    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d",&A[i]);
    }
    trace(A,N);
    insertionSort(A,N);

    return 0;
}