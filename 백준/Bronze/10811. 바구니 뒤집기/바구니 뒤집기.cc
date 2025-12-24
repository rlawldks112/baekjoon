#include <iostream>
using namespace std;
int main(){
    int N,M;
    cin>> N>>M;
    int A[N];
    for(int i =0; i<N; i++){
        A[i]=i+1;
    }
    while(M>0){
        M--;
        int i,j;
        cin >>i>>j;
        i-=1;j-=1;
        while(i != j && i<j){
            int temp = A[i];
            A[i]= A[j];
            A[j] = temp;
            i++;j--;
        }
    }
    for(int i=0; i< N;i++){
        cout<<A[i]<<' ';
    }
}