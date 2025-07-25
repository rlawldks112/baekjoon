#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    int A = 5 * 60;
    int B = 60;
    int C = 10;
    int ans[3] = {0,0,0};

    if (T %10 !=0 ){
        cout << -1 << endl;
        return 0;
    }
    
    while (T>0){
        if (T >= 300){
            T = T - A;
            ans[0] += 1;
            continue;
        }
        if ( T >= 60){
            T = T - B;
            ans[1] += 1;
            continue;
        }
        if ( T >= 10){
            T = T - C;
            ans[2] += 1;
            continue;
        }
    }

    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    return 0;
}