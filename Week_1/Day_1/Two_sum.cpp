#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {  // Approach = Hashmap
     unordered_map<int,int>m;
     for(int i=0;i<nums.size();i++){
        int need=target-nums[i];
        if(m.count(need)) return{m[need],i};     // T.C=O(n) and S.C=O(n)
        m[nums[i]]=i;
     }
     return {};
     
      
    }
   
};