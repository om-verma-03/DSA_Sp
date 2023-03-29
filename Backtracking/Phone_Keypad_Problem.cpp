#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<string>& ans,vector<string>& mapping,string temp,string digits,int ind){
        if(ind >= digits.size()){
            ans.push_back(temp);
            return;
        }

        int digit = digits[ind]-'0';    //digits se ek digit nikal ke int me convert krr denge
        string value = mapping[digit];   //us digit ka mapping nikalange
        for(int i=0;i<value.size();i++){    //Phir eg. abc string pe for loop chalaynge
            temp.push_back(value[i]);   //BackTracking
            solve(ans,mapping,temp,digits,ind+1);
            temp.pop_back();            //Wapis waqt remove krr rhe h
        }
    }
    vector<string> letterCombinations(string digits) {
        string temp = "";
        vector<string> ans;
        vector<string> mapping(10);

        if(digits.size() == 0){
            return ans;
        }

        mapping[2] = "abc";
        mapping[3] = "def";
        mapping[4] = "ghi";
        mapping[5] = "jkl";
        mapping[6] = "mno";
        mapping[7] = "pqrs";
        mapping[8] = "tuv";
        mapping[9] = "wxyz";

        solve(ans,mapping,temp,digits,0);
        return ans;
    }
};