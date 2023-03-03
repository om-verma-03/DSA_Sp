#include<iostream>
#include<vector>
using namespace std;

void selection(vector<int>& arr){   //Selection sort
    for(int i=0;i<arr.size();i++){
        int min_index = i;
        //index of minimum elementin range 1->n
        for(int j=i+1;j<arr.size();j++){
            //new minimum , then store
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        //at last swap with minimum index
        swap(arr[i],arr[min_index]);
    }
}
int main(){
    vector<int> arr = {2,16,14,10,8,4,11};

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    selection(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}