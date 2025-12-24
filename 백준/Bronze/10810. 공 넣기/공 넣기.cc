#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N>>M;
    int A[N]={0,}, i, j, k;
    while(M>0){
        cin >> i>> j>> k;
        for(int o =i;o <=j; o++){
            A[o-1] = k;
        }
        M--;
    }
    for(int o = 0 ; o <N; o++){
        cout << A[o] << ' ';
    }
}