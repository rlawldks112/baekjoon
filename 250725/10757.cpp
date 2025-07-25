#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string A, B;
    cin >> A >> B;

    int max_length = max(A.length(), B.length());
    A = string(max_length - A.length(), '0') + A;
    B = string(max_length - B.length(), '0') + B;
    int carry = 0;
    string res;
    for ( int i = max_length - 1; i >= 0 ; i--){
        int mul = (A[i] -'0') + (B[i] - '0' )+ carry;
        carry = mul/10;
        res += (mul%10)+'0';
    }
    if (carry >0){
        res += carry + '0';
    }
    reverse(res.begin(), res.end());
    cout <<res <<endl;
    return 0;
}