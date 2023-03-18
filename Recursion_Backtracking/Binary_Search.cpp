#include<iostream>
#include<vector>
using namespace std;

bool Binary_Search(vector<int>& arr,int tar,int start,int end){
    //Base Case
    if(start > end){
        return false;
    }
    int mid = start+(end-start)/2;

    if(arr[mid] == tar){
        return true;
    }
    if(arr[mid] > tar){//Recursive Call
        return Binary_Search(arr,tar,start,mid-1);
    }
    else if(arr[mid] < tar){//Recursive Call
        return Binary_Search(arr,tar,mid+1,end);
    }
}
int main(){
    vector<int> arr = {2,4,6,8,10,12,16};
    int tar = 7;
    cout<<Binary_Search(arr,tar,0,arr.size()-1);
    return 0;
}