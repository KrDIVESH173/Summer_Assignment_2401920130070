#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();                          ///  two pointer (front and end)
       int l=0,r=n-1,sq=n-1;
       vector<int>ans(n);
       while(l<=r){
        int Left=nums[l]*nums[l];
        int Right=nums[r]*nums[r];    //  TC=O(n) , SC=O(n)

        if(Left<Right){
            ans[sq]=Right;
            r--,sq--;
        }
        else{
            ans[sq]=Left;
            l++,sq--;
        }
        
       }
       return ans;
    }
};