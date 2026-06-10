#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=n/2;i>0;i--){
            if(n%i==0){
                int t=n/i;
                 string pat=s.substr(0,i);
                 string ans="";
                 while(t--){
                    ans+=pat;
                 }                                      //TC=O(n^2) , SC=O(n)
                 if(ans==s) return true;
            }
        }
       return false;
    }
};