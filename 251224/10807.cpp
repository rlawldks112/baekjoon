#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N];
    for(int i =0 ; i <N; i++){
        cin >> A[i];
    }
    int v, n=0;
    cin >> v;
    for(int i =0 ; i <N; i++){
        if(v==A[i]){
            n++;
        }
    }
    cout << n;
}