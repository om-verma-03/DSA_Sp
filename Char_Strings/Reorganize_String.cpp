class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};

        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }//Hamare pas S me char h so hash me ham 'a' se minus krr k store krra rhe h

        char max_freq_char;
        int max_freq = INT_MIN;

        for(int i=0;i<26;i++){
            if(hash[i] > max_freq){
                max_freq_char = 'a'+i;
                max_freq = hash[i];
            }
        }//String s me max occurence wale character or uski frequence ko store krrwa rhe h  

        int index = 0;
        while(max_freq > 0 && index < s.size()){
            s[index] = max_freq_char;
            index+=2;
            max_freq--;
        }//Agar ham string S ka max occurence wale char ko ek ek gap chor ke store krrwa sakte h then it is possible to reorganize string

        if(max_freq != 0){//Agar upper wale step krrne k baad bhi max_freq 0 nhi hua then It is not possible to reorganize string
            return "";
        }

        hash[max_freq_char - 'a'] = 0;

        for(int i=0;i<26;i++){    //Agar empty string "" nhi return hua then we can allocate rest char from hash to string S by reorganizing it
            while(hash[i] > 0){
                //Agar index,string S ke size ke bound ke bahar ja chuka h then use ghuma ke wapis index 1 pe le aao or waha se char dalna shuru krro because 0 index pe to tum already dalna shuru krr chuke ho with gap of 2
                index = index >= s.size() ? 1 : index;
                s[index] = i+'a';
                hash[i]--;
                index += 2;
            }
        }
        return s;
    }
};