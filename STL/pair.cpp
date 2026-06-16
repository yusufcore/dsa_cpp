#include<bits/stdc++.h> // 
using namespace std;

int main(){
    pair<int, string> p; 
    // p = make_pair(2, "abc"); // inserting values into pair.
    p = {2, "abcd"};
    pair<int, string> &p1 = p;  // reference(&) changes the original value of the pair.
    p1.first = 3;
    cout << p.first << " " << p.second << endl; 
    // p.first -> 2, p.second -> "abc" 

    // storing two arrays as a pair.
    pair<int, int> arr[3];
    arr[0] = {1,2};
    arr[1]= {2,3};
    arr[2] = {3,4};
    swap(arr[0], arr[1]);

    // printing the arrays stored as a pair.
    for(int i = 0; i <3; i++){
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}
// pair is used for maintaining relationship between two values.
// pair is a container that holds two values of different data types.
// It is defined in the <utility> header file and is part of the C++ Standard Library. 
// The pair class template provides a way to store and manipulate two related values as a single unit. Each value in a pair is referred to as "first" and "second". The pair can be used to store any combination of data types, making it a versatile tool for various programming tasks.