#include<bits/stdc++.h>
using namespace std;

int binary_Search(vector<int>& arr,int start,int end,int tar){
    int s = start;
    int e = end;

    while(s<=e){
        int mid = (s+e) >> 1;

        if(arr[mid] == tar){
            return mid;
        }
        if(arr[mid] < tar){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}

int expo_Search(vector<int> arr,int tar){
    if(arr[0] == tar){
        return 0;
    }

    int i=1;
    while(i<arr.size() && arr[i] <= tar){
        i = i*2;
    }
    int size = arr.size()-1;
    
    return binary_Search(arr,i/2,min(i,size),tar);
}
int main(){
    vector<int> arr = {3,4,5,6,11,13,14,15,56,70,72};
    int ans = expo_Search(arr,15);
    cout<<"Element is present at index: "<<ans<<endl;
    return 0;
}