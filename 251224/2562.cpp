#include <iostream>
using namespace std;

int main(){
    int max = 0 , n = 0;
    for ( int i = 0 ; i < 9 ; i ++){
        int X;
        cin >> X;
        if(X>max){
            max = X;
            n = i+1;
        }
    }
    cout << max << '\n' << n ;
}