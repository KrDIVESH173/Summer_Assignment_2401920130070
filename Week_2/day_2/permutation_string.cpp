#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i=0,j=0;
        vector<int>f1(26,0);
        vector<int>f2(26,0);

        for(int i=0;i<s1.size();i++){
            f1[s1[i]-'a']++;
        }

        while(j<s2.size()){
            f2[s2[j]-'a']++;
                                           
            if(j-i+1>s1.size()){
                f2[s2[i]-'a']--;             // TC=O(n)  , SC=O(1)
                i++;
            }
          if(f2==f1) return true;  
          j++;
        }
        return false;
        
    }
};