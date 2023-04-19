#include<iostream>
using namespace std;

class Solution {
public:
    void remove_Substr(string& s,string& part){
        //Base case
        if(s.find(part) == string::npos){
            return;
        }

        auto found = s.find(part);
        if(found != string::npos){
            //Means part is present in the string
            string left = s.substr(0,found);
            string right = s.substr(found+part.size(),s.size());  //Change is here
            s = left+right;
        }   
        remove_Substr(s,part);     //Change is Here
    }
    string removeOccurrences(string s, string part) {
        remove_Substr(s,part);
        return s;
    }
};