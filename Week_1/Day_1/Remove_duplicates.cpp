#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& arr) { // Approach = Two Pointer
        int start=0;
        int end=1;
        int n=arr.size()-1;
        while(n--){
            if(arr[start]!=arr[end]){  // T.C=O(n) and S.C=O(1)
                start++;
                arr[start]=arr[end];
            }
            end++;
        }
        return start+1;
    }
};