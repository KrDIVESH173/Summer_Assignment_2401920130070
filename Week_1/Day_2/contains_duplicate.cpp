#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {  // set only contains distinct values
        unordered_set<int>s;
        for(int i:nums){
            if(s.count(i)) return 1;  // TC=O(n),SC=O(n)
           s.insert(i);
           
        }
        return 0;
    }
};