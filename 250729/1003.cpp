#include<iostream>
using namespace std;

int fibonacci(int n, int* mem,int *count0, int* count1) {
    if (n >=2){
        if (mem[n] == 0) {
            mem[n] = fibonacci(n-1, mem, count0, count1) + fibonacci(n-2, mem, count0, count1);
        }
        return mem[n];
    }
    
}

int main(){
    int T;cin >> T;
    while (T--){
        int N;
        cin >> N;
        int count1 = 0, count0 = 0;
        int mem[40] = {0};
        fibonacci(N, mem, &count0, &count1);
        cout << count0 << " " << count1 << endl;
    }
}