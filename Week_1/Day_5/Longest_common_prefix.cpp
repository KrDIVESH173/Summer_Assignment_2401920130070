#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        for(int i=0;i<strs.size();i++){
            while(strs[i].find(s)!=0){
                s=s.substr(0,s.length()-1);

             if(s.empty()) return "";   // TC=O(n.m) , SC=O(1)
                
            }
        }
        return s;
    }
};