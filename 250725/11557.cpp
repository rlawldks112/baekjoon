#  include<iostream>
 using namespace std;

 int main(){
    int T;
    string name, ans;
    cin >> T;
    for (int i = 0 ; i < T; i++){
        int N;
        cin >> N;
        int alchohol = 0, max_alchohol = 0;
        for (int j = 0 ; j < N; j++){
            cin >> name >> alchohol;
            if (alchohol > max_alchohol){
                max_alchohol = alchohol;
                ans = name;
            }
        }
        cout << ans << endl;
    }
 }