#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string h, string e) {
          int m=h.size();
          int n=e.size();
          for(int i=0;i<=m-n;i++){
            for(int j=0;j<n;j++){
                if(h[i+j]!=e[j]){
                    break;                           //  TC=O(n*m) , SC=O(1)
                }
                if(j==n-1) return i;
            }
          }
          return -1;
    }
};