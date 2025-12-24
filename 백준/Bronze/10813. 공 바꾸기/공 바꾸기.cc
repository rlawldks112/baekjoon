#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N>>M;
    int A[N], i, j;
    for(int o = 0 ; o <N; o++){
        A[o] = o+1;
    }
    while(M>0){
        cin >> i>> j;
        int temp= A[i-1];
        A[i-1] = A[j-1];
        A[j-1] = temp;
        M--;
    }
    for(int o = 0 ; o <N; o++){
        cout << A[o] << " ";
    }
}