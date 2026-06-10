#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10,20,30};

    auto it = v.begin();  // points to the first element.
    cout << *it << endl;  // *(dereference is used to point to the value stored in the pointing element.)
    it++; // move to the next element.
     cout << *it << endl;
 }