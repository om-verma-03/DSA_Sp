#include<iostream>
#include<vector>
using namespace std;

void PrintSubsequence(string st,string ans,int ind){
    if(ind >= st.size()){
        cout<<ans<<endl;    
        return;
    }

    //Include
    ans.push_back(st[ind]);
    PrintSubsequence(st,ans,ind+1);

    ans.pop_back();

    //Exclude
    PrintSubsequence(st,ans,ind+1);
}
int main(){
    string st = "abc";
    string ans;

    PrintSubsequence(st,ans,0);
    return 0;
}

//If I write the Include part first Then I have to do pop_back after include
//Else If I write the Exclude part first Then No need of pop_back after Include part