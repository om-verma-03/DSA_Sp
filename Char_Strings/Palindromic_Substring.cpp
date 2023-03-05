class Solution {
public:
    int ExpandAroundIndex(string s,int i,int j){
        int count = 0;
        while(i >= 0 && j < s.size() && s[i] == s[j]){
//             for(int temp=i;temp<=j;temp++){
//                 cout<<s[temp]<<" ";
//             }cout<<endl;

            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;

        for(int i=0;i<s.size();i++){
            //Odd
            cout<<"Odd: "<<endl;
            int oddAns = ExpandAroundIndex(s,i,i);
            count = count + oddAns;

            //Even
            cout<<"Even: "<<endl;
            int evenAns = ExpandAroundIndex(s,i,i+1);
            count = count + evenAns;
        }
        return count;
    }
};
