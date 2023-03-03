#include<iostream>
#include<vector>
using namespace std;

void Bubble(vector<int>& arr){
    for(int i=1;i<arr.size();i++){
        for(int j=0;j<arr.size()-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
//Optimized one
void Bubble_opt(vector<int>& arr){
    for(int i=1;i<arr.size();i++){
        bool swapped = false;
        for(int j=0;j<arr.size()-i;j++){
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped == false){
            //Isska mtlb alredy sort ho chuka h
            break;
        }
    }
}

int main(){
    vector<int> arr = {2,16,14,10,8,4,11};
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Bubble_opt(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}