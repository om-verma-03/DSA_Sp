class Solution {
public:
    void add_str(string& num1,int p1,string& num2,int p2,int carry,string& ans){  //THis will beat 100% and less memory bcz we have passed parameters with reference and passed the seperate 'ans' string
        //Base case
        if(p1 < 0 && p2 < 0){
            if(carry != 0){
                ans.push_back(carry + '0');
            }
            return;
        }


        int n1 = (p1>=0 ? num1[p1] : '0')-'0';
        int n2 = (p2>=0 ? num2[p2] : '0')-'0';

        int sum = n1 + n2 + carry;
        int dig = sum%10;
        carry = sum/10;
        ans.push_back(dig+'0');

        add_str(num1,p1-1,num2,p2-1,carry,ans);
    }
    string addStrings(string num1, string num2) {
        string ans="";
        add_str(num1,num1.size()-1,num2,num2.size()-1,0,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};