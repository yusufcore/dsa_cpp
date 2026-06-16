#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout << "Size: " << v.size() << endl;
    for(int i =0; i<v.size();i++){
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> v;   // creating a vector array.
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        printVec(v);
        v.push_back(x); // O(1) 
    }
    printVec(v);
    vector<int> v2 = v; // copying the vector v into v2.  // O(n) 
    v2.push_back(100); 
    printVec(v2);
}