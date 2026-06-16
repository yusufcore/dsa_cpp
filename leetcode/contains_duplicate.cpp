#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> seen;

       for(int num : nums){
           seen.insert(num);   // O(n) time complexity for inserting all elements
}

       if(seen.size() != nums.size())  // agar set ka size aur vector ka size alag hai, to duplicate tha
    return true;  // duplicate tha!
else
    return false; // sab unique the
    }
};