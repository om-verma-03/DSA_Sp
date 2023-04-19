#include<bits/stdc++.h>
using namespace std;

void print_subarray(vector<int>& arr,int start,int end){
    //Base case
    if(end == arr.size()){
        return;
    }

    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    print_subarray(arr,start,end+1);
}

void print_subarray_util(vector<int>& arr,int start){
    for(int i=0;i<arr.size();i++){
        print_subarray(arr,i,i);
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    print_subarray_util(arr,0);    
    return 0;
}