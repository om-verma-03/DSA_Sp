#include<bits/stdc++.h>
using namespace std;

int cut_segment(int n,int x,int y,int z){
    if(n == 0){
        return 0;
    }
    if(n < 0){
        return INT_MIN;
    }

    int ans1 = cut_segment(n-x,x,y,z)+1;
    int ans2 = cut_segment(n-y,x,y,z)+1;
    int ans3 = cut_segment(n-z,x,y,z)+1;

    return max(ans1,max(ans2,ans3));
}
int main(){
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    int ans = cut_segment(n,x,y,z);
    if(ans < 0){
        cout<<"0"<<endl;
    }
    cout<<ans<<endl;
    return 0;
}