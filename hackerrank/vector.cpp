#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;  // taking input for the size of the vector

    vector<int> v(n);  // defining a vector of size n

    for(int i = 0; i < n; i++) {
        cin >> v[i];   // taking input for each element of the vector
    }

    sort(v.begin(), v.end());  // sorting the vector in ascending order using the sort function from the algorithm library

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";   // printing the sorted vector elements separated by a space
    }

    return 0; // returning 0 to indicate that the program ended successfully
}