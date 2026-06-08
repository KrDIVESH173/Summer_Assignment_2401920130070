#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);
        for(char x:s){
            count[x-'a']++;
        }
        for(char c:t){
            count[c-'a']--;         ///   TC=O(n+m) , SC=O(1)
        }
        for(int x:count){
           if(x!=0) return false;
        }
        return true;
    }
};