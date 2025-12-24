#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N,M;
    cin>> N>>M;
    int A[N+1];
    for(int i =0; i<N; i++){
        A[i]=i+1;
    }
    while(M>0){
        M--;
        int i,j;
        cin >>i>>j;
        i-=1;j-=1;
        reverse(A+i,A+j+1);
    }
    for(int i=0; i< N;i++){
        cout<<A[i]<<' ';
    }
}