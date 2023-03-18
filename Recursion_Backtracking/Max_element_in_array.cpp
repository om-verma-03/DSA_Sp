#include<bits/stdc++.h>
using namespace std;

void max_elem(vector<int>& arr,int ind,int& max){
    if(ind == arr.size()){
        return;
    }

    if(arr[ind] > max){
        max = arr[ind];
    }
    max_elem(arr,ind+1,max);
}
int main(){
    vector<int> arr = {4,7,16,3,1,6,9};
    int max = INT_MIN;
    max_elem(arr,0,max);
    cout<<max<<endl;

    return 0;
}