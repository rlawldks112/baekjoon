#include <iostream>
using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;
    while ( Y> 0){
        int a, b;
        cin >> a>> b;
        X-= a*b;
        Y--;
    }
    if ( X == 0 ) cout << "Yes";
    else cout << "No";

}