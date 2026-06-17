#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main(){
    map<int, string> m;
    m[1] = "Yusuf",
    m[5] = "Ahemed",
    m[3] = "Ammar";
    m.insert({4, "Aisha"});      // key -> value
    // map<int, string> :: iterator it;  // iterator is used to point to the element in the map.
    // for(it=m.begin(); it!=m.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl;  // * is used to point to the value stored in the pointing element.

    for(auto pr : m){  // auto is used to automatically determine the type of the variable pr.
        cout << pr.first << " " << pr.second << endl;  // no need to use * to point to the value stored in the pointing element.
    }
}
