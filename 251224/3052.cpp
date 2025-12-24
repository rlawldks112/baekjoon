#include <iostream>
using namespace std;

int main(){
    int A[10],n=0;
    for(int i =0 ; i <10; i ++){
        cin>>A[i];
        A[i]= A[i]%42;
        int j;
        for(j =0; j < i; j++){
            if(A[j]==A[i]){
                break;
                
            }
            
        }
        if(j == i) n++;
    }
    cout << n;

}