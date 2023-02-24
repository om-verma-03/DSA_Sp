//In coding ninjas
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    int l = 0;
    int m = 0;

    while(m < nums.size()){
        if(nums[m] < 0){
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else{
            m++;
        }
    }
    return nums;
}