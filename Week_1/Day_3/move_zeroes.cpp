#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {  //   two pointer approach
       int k=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[k]);     //   TC=O(n),SC=O(1)
            k++;
        }
       }
       
    }
};