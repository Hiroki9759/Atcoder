#include <iostream>
using namespace std;


//バブルソート
int bubbleSort(int A[],int N){
    int sw = 0;
    bool flag = 1;
    for(int i=0; flag; i++){
        flag = 0;
        for (int  j = N-1; j >= i+1; j--)
        {
            if (A[j] <A[j-1])
            {
                //隣接要素の交換
                swap(A[j],A[j-1]);
                flag = 1;
                sw++;
            }
            
        }
    }
    return sw;
}

int main(){
    int N,sw;
    int A[100];
    cin>> N;
    for (int i = 0; i < N; i++)
    {       
        cin >>A[i];
    }
    
    sw = bubbleSort(A,N);
    
    for (int i = 0; i < N; i++)
    {
        if (i)
        {
            cout<<" ";
        }
        cout << A[i];
    }
    cout << endl;
    cout <<sw << endl;

    return 0;
}