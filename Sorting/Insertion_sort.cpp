#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int>& arr){
    for(int round = 0;round<arr.size();round++){
        int val = arr[round];
        int j;
        for(j = round-1;j>=0;j--){
            if(arr[j] > val){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = val;
    }
}

int main(){
    vector<int> arr = {2,16,14,10,8,4,11};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}