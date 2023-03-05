class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        while(pos != string::npos){
            s.erase(pos,part.length());    //After removing part from s string we are updating pos
            pos = s.find(part);
        }
        return s;
    }
};

/*
The function returns the index of the first occurrence of sub-string, if the sub-string is not found it returns string::npos(string::pos is static member with value as the highest possible for the size_t data structure).
*/