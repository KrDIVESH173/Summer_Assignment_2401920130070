#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string generate(string& word) {
        int arr[26] = {0};
        for (char &ch : word) {
            arr[ch - 'a']++;
        }
        string new_word = "";
        for (int i=0;i<26; i++) {
            int freq=arr[i];
            if (freq>0) {
                new_word+=string(freq, i + 'a');
            }
        }
        return new_word;
    }
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        int n=s.size();
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> result;
        for (int i=0;i<n;i++) {
            string word=s[i];
            string key=generate(word);
            mp[key].push_back(word);           ///  TC=O(n*k(size of string)) , SC=O(n*k)
        }
        for (auto &i:mp) {
            result.push_back(i.second);
        }
        return result;
    }
};