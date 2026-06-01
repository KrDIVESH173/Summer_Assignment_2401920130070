#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {  //   Approach = greedy
        int top=prices[0];
        
        int pro=0;
        for(int j=1;j<prices.size();j++){
            int a=prices[j]-top;           //  T.C=O(n) and S.C=O(1)
            pro=max(pro,a);
            if(prices[j]<top)
            top=prices[j];
            
        }
        return pro;
    }
};