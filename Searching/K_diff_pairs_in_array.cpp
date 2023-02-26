class Solution {
public:
    int Binary_search(vector<int>& nums,int start,int tar){
        int s = start;
        int e = nums.size()-1;

        int mid = s+(e-s)/2;

        while(s<=e){
            if(nums[mid] == tar){
                return mid;
            }
            if(nums[mid] < tar){
                s = mid+1;
            }
            else if(nums[mid] > tar){
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> st;

        for(int i=0;i<nums.size();i++){
            int ind = Binary_search(nums,i+1,nums[i]+k);
            if(ind != -1){
                st.insert({nums[i],nums[ind]});
            }
        }
        return st.size();
    }
};