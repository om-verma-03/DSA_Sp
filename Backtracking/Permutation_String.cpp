#include<iostream>
using namespace std;

void permut(string& str,int ind){
    if(ind == str.size()){   //Base case
        cout<<str<<" ";
        return;
    }

    for(int j=ind;j<str.size();j++){
        swap(str[ind],str[j]);

        permut(str,ind+1);   //Recursive call

        swap(str[ind],str[j]);     //Wapis jaate waqt jo changes kiye h use revert krro(Backtracking)
    }
}
int main(){
    string st = "abcde";
    permut(st,0);
    return 0;
}