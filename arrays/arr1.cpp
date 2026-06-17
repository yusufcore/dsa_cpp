#include <iostream>
using namespace std;

int main(){
    int a[5];  // array is empty of size 5, contains garbage values;

    int b[5] = {10,20,40,90,80};  // fully initialized array.

    int c[5] = {1,2}; // c = {1,2,0,0,0} 

    int d[5] = {};   // d = {0,0,0,0,0};

    int e[] = {5, 10, 15};  // compiler decides and sets size to 3;

    for(int i = 0; i < 5; i++){
        cout << b[i] << " " << a[i] << endl;
    }
}