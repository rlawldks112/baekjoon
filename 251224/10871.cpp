#include <iostream>
using namespace std;

int main(){
    int N,X;
    cin >> N >> X;
    int A[N];
    for(int i =0 ; i <N; i++){
        cin >> A[i];
    }
    int n=0;
    for(int i =0 ; i <N; i++){
        if(X > A[i]){
            cout << A[i] << " ";
        }
    }
}