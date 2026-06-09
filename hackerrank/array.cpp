#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    // input array elements.
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // output in reverse order.
    for(int i = n-1; i>=0; i--){
        cout << arr[i]<< " ";
    }
    return 0;
}