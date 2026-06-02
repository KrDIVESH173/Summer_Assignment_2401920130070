#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {  //  Approach : prefix sum(kadane algorithm)
        int maxi =INT_MIN;
        int prefix=0;
        
        for(int i=0;i<nums.size();i++){    //  TC=O(n),SC=O(1)
          
            prefix+=nums[i];
             maxi=max(maxi,prefix);
            if(prefix<0)
            prefix=0;
           
        }
        return maxi;
    }
};