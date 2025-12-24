#include <iostream>
using namespace std;

int main(){
    int N, n=0;
    cin >> N;
    while(N>0){
        n++;N-=4;
    }
    while(n>0){
        cout << "long ";
        n--;
    }
    cout <<"int";
}