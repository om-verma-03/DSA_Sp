class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            if(mp.find(t[i]) == mp.end()){
                return false;
            }
            mp[t[i]]--;
            if(mp[t[i]] == 0){
                mp.erase(t[i]);
            }
        }
        if(mp.size() == 0){
            return true;
        }
        return false;
    }
};


class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[256] = {0};

        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            hash[t[i]]--;
        }

        for(int i=0;i<256;i++){
            if(hash[i] != 0){
                return false;
            }
        }
        return true;
    }
};