#include <iostream>
using namespace std;
struct Rectangle{  // structure declaration
    int length;
    int breadth;
}r1, r2, r3;  // we can declare variables of structure type at the time of structure declaration
int main(){
    r1.length= 10;
    r1.breadth= 5;
    cout<<sizeof(r1)<< endl;
    cout<<r1.length<< endl;  // accessing members of structure
    cout<<r1.breadth<< endl; // accessing members of structure

    return 0;
}