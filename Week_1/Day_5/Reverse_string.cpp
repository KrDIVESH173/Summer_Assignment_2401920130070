#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {   //  Two Pointer
    int start=0,end=s.size()-1;
        while(start<end) {
            swap(s[start],s[end]);    ///  TC=O(n) , SC=O(1)
            start++;
            end--;
       }
       
    }
};