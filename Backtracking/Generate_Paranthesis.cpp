#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<string>& ans,string temp,int open,int close){
        if(open==0 && close==0){
            ans.push_back(temp);
            return;
        }

        if(open < close){        //Close bracket tabhi include hoga jab we open se count me jayada hoga
            temp.push_back(')');
            solve(ans,temp,open,close-1);
            temp.pop_back();
        }
        if(open > 0){            //Open bracket ka to bas count greater than 0 hona chahhiye
            temp.push_back('(');
            solve(ans,temp,open-1,close);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open = n;
        int close = n;
        string temp = "";

        solve(ans,temp,open,close);
        return ans;
    }
};