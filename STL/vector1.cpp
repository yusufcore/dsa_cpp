#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(7);
    v.push_back(3);
    v.push_back(9);

    cout << v.front() << endl;  // prints the first element.
    cout << v.back() << endl;   // prints the last elements.

    v.pop_back();

    cout << v.back() << endl;
    cout << v.size() << endl;

}