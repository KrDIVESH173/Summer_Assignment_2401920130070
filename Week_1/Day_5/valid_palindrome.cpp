#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     bool isalpha(char ch){
        ch=tolower(ch);
        if(ch>=97&&ch<=122) return true;
        if(ch>=48&&ch<=57) return true;

        return false;
     }
    bool isPalindrome(string s) {
        int start=0,end=s.size()-1;
        while(start<end){
            if(!isalpha(s[start]))
              start++;
            else if(!isalpha(s[end]))
            end--;  
            else if(tolower(s[start])!=tolower(s[end]))    //  TC=O(n)  ,  SC=O(1)
                return false;
            else
            start++,end--;    
        }
        return true;
    }
};