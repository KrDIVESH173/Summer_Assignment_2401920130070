#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int water = 0;
        while (left < right) {
            int size = right - left;              //  two pointer approach
            int h = min(height[left], height[right]);
            water = max(water, h * size);
            if (height[left] < height[right]) {    ///   TC=O(n) , SC=O(1)
                left++;
            } else {
                right--;
            }
        }
        return water;
    }
};