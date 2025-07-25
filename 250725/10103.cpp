#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int score[2] = {100,100};

    for (int i = 0 ; i < n ; i++){
        int a, b;
        cin >> a >> b;
        if (a == b){
            continue;
        }
        else if (a > b){
            score[1] -= a;
        }
        else {
            score[0] -= b;
        }
    }
    cout << score[0] << endl << score[1] << endl;
}