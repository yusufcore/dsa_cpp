#include<bits/stdc++.h> // 
using namespace std;

void explainPair() {
    pair<int, int> p = {1, 5};
    cout << p.first << " " << p.second;

    pair<int, pair<int, float>> f = {1, {3, 6.78}};
    cout << f.first << " " << f.second.second << " " << f.second.first;

    pair<int, int> arr[] = {{1,2}, {3,5}, {5, 1}};
    cout << arr[1].second;
}
int main(){
    explainPair();
    return 0;
}