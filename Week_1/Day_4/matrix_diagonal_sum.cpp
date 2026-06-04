#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {   //   traverse once and consider same values
        int n=mat.size();                         //  for main 
        int main=0,seco=0;
        for(int i=0;i<n;i++){
            main+=mat[i][i];
            if(i!=n-i-1)
            seco+=mat[i][n-i-1];   // TC=O(n)  ,  SC=O(1)
        }
        return main+seco;
    }
};