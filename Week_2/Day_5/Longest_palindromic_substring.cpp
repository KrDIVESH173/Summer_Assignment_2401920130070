#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
         int t[1001][1001];
    bool check(string &s, int i,int j){
        if(i>=j) return 1;
        if(t[i][j]!=-1) return t[i][j];
        else if(s[i]==s[j]) return t[i][j]= check(s,i+1,j-1);
        else return t[i][j]=0;
    }
    string longestPalindrome(string s) {
        int n=s.size();                ///  TC=O(n^2) , SC=O(n^2)
        memset(t,-1,sizeof(t));
        int maxl=INT_MIN;
        int inl=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check(s,i,j)==true){
                    if(j-i+1>maxl){
                        maxl=j-i+1;
                        inl=i;
                    }
                }
            }
        }
        return s.substr(inl,maxl);
    }
};