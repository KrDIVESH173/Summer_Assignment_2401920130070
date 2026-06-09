#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     bool allZero(vector<int>&count){
        for(int &i:count){
            if(i!=0) return 0;
        }
        return 1;
     }

    vector<int> findAnagrams(string s, string p) {
        vector<int>count(26,0);
        vector<int>ans;
        for(int i=0;i<p.size();i++){
            count[p[i]-'a']++;
        }
        int i=0,j=0;
        while(j<s.size()){
            count[s[j]-'a']--;

            if(j-i+1==p.size()){                     //   TC=O(|s|+|p|)  ,  SC=O(1)
                if(allZero(count)){
                    ans.push_back(i);
                }
                count[s[i]-'a']++;
                i++;
            }
            j++;
            
        }
        return ans;
    }
};