#include <iostream>
using namespace std;

int main(){
    int arr[] = {-5, -3, -8, -1, -6};
    int largest = arr[0];  

    for(int i=0; i<5; i++){
        if(arr[i] > largest){    // logic
            largest = arr[i];
        }
    }
    cout << "Largest = " << largest <<endl;
    return 0;
}