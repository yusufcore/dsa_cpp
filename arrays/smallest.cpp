#include <iostream>
using namespace std;

int main(){
    int arr[] = {4, 7, 2, 9, 1};
    int smallest = arr[0];  

    for(int i=0; i<5; i++){
        if(arr[i] < smallest){    // logic
            smallest = arr[i];
        }
    }
    cout << "Smallest = " << smallest <<endl;
    return 0;
}