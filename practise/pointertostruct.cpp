#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    //  Rectangle r={10,5};
    //  cout << "Length: " << r.length << endl;
    //  cout << "Breadth: " << r.breadth << endl;

    Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); // allocating memory for a structure variable in the heap using malloc function.
    p->length = 10; // assigning value to the length member of the structure using the pointer variable p
    p->breadth = 5; // assigning value to the breadth

    //  Rectangle *p=&r; // pointer to the structure variable r
     cout << p->length << endl; // accessing the length member of the structure using the pointer variable p
     cout << p->breadth << endl; // accessing the breadth member of the structure using the pointer variable p
     free(p); // deallocating the memory allocated for the structure variable in the heap using free function.  
     return 0;
}

