#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;   // creating a vector array.

    v.push_back(10);
    v.push_back(20);  // to insert array elements.
    v.push_back(30);
    v.push_back(79);

    // v.pop_back();   // remove the last inputted element.
    
    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v.size() << endl;  // prints the size of the vector array.
    
    for(int i=0; i<v.size();i++){   // printing entire vector array.
        cout << v[i] << endl;
    }
    
}