#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr,int s,int e){
    int pivotElement = arr[s];

    int count = 0;

    for(int i=s+1;i<=e;i++){          //Here is the catch (s+1)
        if(arr[i] <= pivotElement){
            count++;
        }   
    }

    int pivotIndex = s+count;
    swap(arr[s],arr[pivotIndex]);

    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= arr[pivotIndex]){
            i++;
        }
        while(arr[j] > arr[pivotIndex]){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(vector<int>& arr,int s,int e){
    if(s >= e){
        return;
    }

    int p = partition(arr,s,e);

    //Sort Left part
    quickSort(arr,s,p-1);

    //Sort Right part
    quickSort(arr,p+1,e);
}
int main(){
    vector<int> arr = {6,8,4,10,3,5};

    quickSort(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}