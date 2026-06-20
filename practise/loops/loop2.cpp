// nested loops
#include <iostream>
using namespace std;

int main(){
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6}};  // 2-D Array, Matrix

    for(int i = 0; i < 2; i++){    
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
// arr[0][0] = 1, arr[0][1] = 2, arr[0][2] = 3
// arr[1][0] = 4, arr[1][1] = 5, arr[1][2] = 6