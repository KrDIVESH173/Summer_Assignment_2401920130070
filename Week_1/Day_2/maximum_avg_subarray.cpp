#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {     // sliding window 
           double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxi=sum/k;
    
        for(int i=k;i<nums.size();i++){
             sum+=nums[i]-nums[i-k];         // TC=O(n), SC=O(1)
              maxi=max(maxi,(double)sum/k);
        }
        return maxi;
    }
};