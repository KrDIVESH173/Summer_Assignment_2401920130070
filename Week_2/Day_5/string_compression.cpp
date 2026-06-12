#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int k=0;
        for(int i=0;i<n;){
            char curr=chars[i];
            int count=0;
            while(i<n&&chars[i]==curr){
                i++;
                count++;
            }
            chars[k++]=curr;
            if(count>1){
                string ans=to_string(count);
                for(char c:ans){
                    chars[k++]=c;
                }                                        ///  TC=O(n), SC=O(1)
            }
        }
        return k;
    }
};