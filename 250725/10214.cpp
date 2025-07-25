#include<iostream>
using namespace std;

int main(){
    int y_Score = 0, k_Score = 0;
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i ++) {
        for(int j = 0; j < 9; j++){
            int a, b;
            cin >> a >> b;
            y_Score += a;
            k_Score += b;
        }
        if (y_Score > k_Score) {
            cout << "Yonsei" << endl;
        } else if (y_Score < k_Score) {
            cout << "Korea" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }
}