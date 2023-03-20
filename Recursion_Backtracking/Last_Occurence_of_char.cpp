#include<iostream>
#include<vector>
using namespace std;

void last_occ(string st,int ind,int& ans,int tar){
    if(ind == st.size()){
        return;
    }

    if(st[ind] == tar){
        ans = ind;
    }
    last_occ(st,ind+1,ans,tar);
}
int main(){
    string st = "abeddefhsgdfekjbdzeg";
    char tar = 'e';
    int ans = 0;
    last_occ(st,0,ans,tar);

    cout<<ans<<endl;
    return 0;
}

//Time Complexity-O(n)
//Space Complexity-O(n)   -->Because of Call Stack Used by recursion