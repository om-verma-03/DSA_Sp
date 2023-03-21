#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int s,int e){
    int mid=(s+e)/2;

    //Length of first one
    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //Copy half value in first part
    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }

    //Copy next half value in second part
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }

    //Now merge 2 sorted array
    int index1=0;
    int index2=0;
    mainArrayIndex=s;

    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }

    //If the first block is big
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }

    //If the second block is big
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }
}

void mergeSort(vector<int>& arr,int s,int e){
    //Base Case
    if(s>=e){
        return;
    }

    int mid=(s+e)/2;   //OR mid = s+(e-s)/2

    //Left part sort krrna h
    mergeSort(arr,s,mid);

    //Right part sort krrna h
    mergeSort(arr,mid+1,e);
    
    //merge
    merge(arr,s,e);
        
}
int main(){
    vector<int> arr = {4,5,13,2,11};

    mergeSort(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}