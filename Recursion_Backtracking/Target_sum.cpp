#include<bits/stdc++.h>
using namespace std;

int target_sum_1(vector<int>& arr,int tar){
    if(tar == 0){   //0 target banane ke liye 0 elements chahhiye
        return 0;
    }

    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(tar-arr[i] >= 0){
            int ans = target_sum_1(arr,tar-arr[i]);
            mini = min(mini,ans+1);
        }
    }
    return mini;
}

int target_sum_2(vector<int>& arr,int temp,int tar){
    if(temp == tar){
        return 0;
    }

    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(temp+arr[i] <= tar){
            int ans = 1 + target_sum_2(arr,temp+arr[i],tar);
            mini = min(mini,ans);
        }
    }
    return mini;
}

int main(){
    vector<int> arr = {2,4,6,8};
    int target = 11;

    cout<<target_sum_1(arr,target)<<endl;
    cout<<target_sum_2(arr,0,target)<<endl;

    return 0;
}

//Basically I have to find that minimum number from the array I can use to make the target
//I can use the elements from the array any number of times

//Target_sum tells that minimum numbers required to make target(I can use any number,more than once)