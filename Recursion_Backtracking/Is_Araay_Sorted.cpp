#include<bits/stdc++.h>
using namespace std;

bool is_Sorted(vector<int>& arr,int i){
    if(i == arr.size()){
        return true;
    }

    if(i+1 != arr.size() && arr[i] > arr[i+1]){
        return false;
    }

    return is_Sorted(arr,i+1);
}
int main(){
    vector<int> arr = {10,10,10};

    bool result = is_Sorted(arr,0);
    cout<<result<<endl;
    return 0;
}