#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        int count = 0;
        double x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        if (d == 0 && r1 == r2) {
            count = -1;
        }
        else if (r1 +r2 < d){
            count = 0;
        }
        else if (r1+r2 ==d){
            count =1;
        }
        else if (abs(r1-r2) < d && d < r1+r2){
            count  = 2;
        }
        else if (abs(r1 - r2) == d){
            count = 1;
        }
        else if (d < abs(r1 - r2) && r1 != r2){
            count = 0;
        }
        cout << count << endl;
    }   
    return 0;
}