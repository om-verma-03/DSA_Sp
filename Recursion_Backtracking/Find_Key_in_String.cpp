#include<iostream>
using namespace std;

bool is_present(string st,int ind,char tar){
    if(ind == st.size()){
        return false;
    }
    if(st[ind] == tar){
        return true;
    }

    bool ans = is_present(st,ind+1,tar);
    return ans;
}
int main(){
    string st = "OmVermaKumar";
    char tar = 'z'; 
    cout<<is_present(st,0,tar);
    return 0;
}