#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string s, string p) {
       unordered_map<char,int>m;
       for(int i=0;i<p.size();i++){
        m[p[i]]++;
       } 
       for(int i=0;i<s.size();i++){       // TC=O(n+m) , SC=O(1)(only lowercase character)
            if(m[s[i]]==0) return 0;
            else m[s[i]]--;
       }
       return 1;

    }
};