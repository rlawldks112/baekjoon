#include <iostream>
using namespace std;
/*
int main(){
    int check = 0;
    int x, n = 28;
    while(n >0){
        cin >>x;
        check |= (1<<x);
        n--;
    }
    for(int i = 1; i <31; i ++){
        if(!(check & (1<<i))) {
            cout << i <<'\n';
        }
    }
}
*/
#include<set>
int main(){
    set<int> s;
    for(int i = 1; i <31 ; i++){
        s.insert(i);
    }
    for(int i = 0; i <28 ; i++){
        int x;
        cin >> x;
        s.erase(x);
    }
    for(int x:s){
        cout <<x<<'\n';
    }
}