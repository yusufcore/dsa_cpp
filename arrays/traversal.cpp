#include <iostream>
using namespace std;

int main(){
    int arr[] {3,4,5,68,9,7,4,32,5,7,8,90,8654,321};
    int n = sizeof(arr)/sizeof(arr[0]);  // standard way to get size.

    //forward
    for(int i = 0; i<n; i++){
        cout << arr[i] <<endl;;
    }
    //backward
    for(int i = n-1; i>=0 ; i--){
        cout << arr[i] <<endl;
    }
}



