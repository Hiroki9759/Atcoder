#include<bits/stdc++.h>
using namespace std;
int A[100001],n;
int partition(int p, int r){
    int x,i,j;
    x = A[r];
    i = p-1;
    for(j=p;j<r;j++){
        if(A[j] <= x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}
int main(){
    int i,q;
    int N;
    cin >> N;
    for(int j = 0; j < N;j++){
        cin >> A[j]; 
        
    }
    q = partition(0,N-1);
    
    for(int i = 0;i < N;i++){
        if(i)cout << " ";
        if(i == q)cout << "[";
        cout << A[i];
        if(i == q)cout << "]";
    }
    cout << endl;
    return 0;
    
}