#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 7, 2, 9, 1};
    int largest = arr[0];  

    for(int i=0; i<5; i++){
        if(arr[i] > largest){    // logic
            largest = arr[i];
        }
    }
    cout << "Largest = " << largest <<endl;
    return 0;
}