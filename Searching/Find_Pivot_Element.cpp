int pivotIndex(vector<int>& nums){
        int start = 0;
        int end = nums.size();

        while(start<=end){
            int mid = start+(end-start)/2;

            if(mid-1 >= 0 && nums[mid-1] > nums[mid]){
                return mid-1;
            }
            if(mid+1 < nums.size() && nums[mid] > nums[mid+1]){
                return mid;
            }

            if(nums[start] >= nums[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }