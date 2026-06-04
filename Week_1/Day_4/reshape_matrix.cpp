#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if (m*n!=r*c)return mat;
        int k=0;
        vector<vector<int>>nums(r,vector<int>(c));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 nums[k/c][k%c]=mat[i][j];       ///  TC=O(m.n) , SC=O(r.c)
                 k++;
            }
        }
        return nums;
    }
};