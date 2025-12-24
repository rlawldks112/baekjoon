#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int A[N];
    int max = 0;
    for(int i = 0 ; i < N; i++){
        cin >>A[i];
        if(max < A[i]) max = A[i];
    }
    float sum =0;
    for(int i = 0 ; i < N; i++){
        sum += ((double)A[i]/max) *100;
        
    }
    cout << (double)sum/N ;
}