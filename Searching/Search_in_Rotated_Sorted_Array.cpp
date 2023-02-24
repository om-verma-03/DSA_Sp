class Solution {
public:
    int binarySearch(vector<int> nums,int target,int start,int end){

        while(start<=end){
            int mid = start+(end-start)/2;
            if(target == nums[mid]){
                return mid;
            }
            if(target < nums[mid]){
                end = mid-1;
            }
            else if(target > nums[mid]){
                start = mid+1;
            }
        }
        return -1;
    }
    int pivotIndex(vector<int>& nums){
        int start = 0;
        int end = nums.size()-1;

        while(start<end){
            int mid = start+(end-start)/2;

            if(mid-1 >= 0 && nums[mid-1] > nums[mid]){
                return mid-1;
            }
            if(mid+1 < nums.size() && nums[mid] > nums[mid+1]){
                return mid;
            }

            if(nums[start] < nums[mid]){
                start = mid;                
            }
            else{//nums[start] >= nums[mid]
                end = mid-1;
            }
        }
        return start;
    }
    int search(vector<int>& nums, int target) {
        int pivot = pivotIndex(nums);

        if(target >= nums[0] && target <= nums[pivot]){
            int ans = binarySearch(nums,target,0,pivot);
            return ans;
        }
        if(pivot+1 < nums.size() && target >= nums[pivot+1] && target <= nums[nums.size()-1]){
            int ans = binarySearch(nums,target,pivot+1,nums.size()-1);
            return ans;
        }
        return -1;
    }
};