class Solution {
public:
    bool isIsomorphic(string s, string t){
        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,char> mp1;
        unordered_map<char,bool> mp2;

        for(int i=0;i<s.size();i++){
            if(mp1.find(s[i]) == mp1.end()){       //s[i] abhi tkk map nhi hua h
                if(mp2.find(t[i]) != mp2.end()){    //To check krro jiske sath map hone wala h(t[i]) wo pehele se kisi ka sathi h to return false
                    return false;
                }
                else{                     //Agar t[i] pehele se kisi ka sathi nhi h then dono s[i] & t[i] ko map krro  & t[i] ko true mark krro
                    mp1[s[i]] = t[i];
                    mp2[t[i]] = true;
                }
            }
            else if(mp1.find(s[i]) != mp1.end()){      //Agar s[i] map ho chuka h already 
                if(mp1[s[i]] != t[i]){         //Then check krro ki jisse map hua para h wo t[i] hi h na agar nhi then return false
                    return false;
                }
            }
        }
        return true;
    }
};