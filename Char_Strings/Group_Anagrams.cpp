class Solution {
public:
    vector<int> hashing(string str){
        vector<int> hash(256,0);
        for(int i=0;i<str.size();i++){
            hash[str[i]]++;
        }
        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
        vector<vector<string>> ans;

        for(auto str : strs){
            mp[hashing(str)].push_back(str);
        }

        for(auto it = mp.begin();it != mp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};