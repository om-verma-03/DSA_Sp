#include<iostream>
using namespace std;

void reverse_st(string& st,int start,int end){
    if(start >= end){
        return;
    }

    swap(st[start],st[end]);

    reverse_st(st,start+1,end-1);
}
int main(){
    string st = "Hello";

    reverse_st(st,0,st.size()-1);
    cout<<st<<endl;
    return 0;
}

//Time Complexity-O(n/2)==O(n)
//Space Complexity-O(n/2)==O(n)   ->because of Call stack