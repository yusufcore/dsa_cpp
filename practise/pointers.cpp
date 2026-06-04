#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a = 10;
    int *p;  //declaration of pointer variable
    p = &a;  //initialization of pointer variable

    cout << a << endl;
    printf("%d\n", *p);  //dereferencing the pointer variable to get the value of a
    cout << p << " " << &a << endl;  //printing the address stored in pointer variable and the address of a to show that they are same

    return 0;
}


// Pointer to an array
#include <iostream>
using namespace std;

int main(){
    
    int A[5] = {2,4,6,8,10};
    int *p;
    // int *p = &A[0];  //pointer to the first element of the array
    p = A; 

    for(int i=0; i<5; i++){
        // cout << A[i] << endl;
        cout << p[i] << endl; // pointer arithmetic to access elements of the array using the pointer variable

    }

    return 0;

}


// Array inside Heap
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;   

int main(){

    int *p;
    p=(int *)malloc(5*sizeof(int));  // allocating memory for an array of 5 integers in the heap using malloc function.

    p[0] = 10; p[1] = 20; p[2] = 30; p[3] = 40; p[4] = 50;

    for(int i=0; i<5; i++){
        cout << p[i] << endl;
    }
    free(p); // deallocating the memory allocated for the array in the heap using free function. 
    return 0;
}

// Size of pointer variables
#include <iostream>
using namespace std;

    struct Rectangle{
        int length;
        int breadth;
    };

  int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl;  // size of pointer variable p1
    cout << sizeof(p2) << endl;  // size of pointer variable p2
    cout << sizeof(p3) << endl;  // size of pointer variable p3
    cout << sizeof(p4) << endl;  // size of pointer variable p4 
    cout << sizeof(p5) << endl;  // size of pointer variable p5

    return 0;
} 
// note -> all are taking 8 bytes because they are all pointer variables and the size of a pointer variable is determined by the architecture of the system (32-bit or 64-bit) and not by the data type it points to. In a 64-bit system, the size of a pointer variable is typically 8 bytes, while in a 32-bit system, it is typically 4 bytes.
