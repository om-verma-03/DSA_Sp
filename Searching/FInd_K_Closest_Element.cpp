class Solution {
public:
    int find_ind(vector<int>& nums,int tar,bool& exact){
        int s = 0;
        int e = nums.size()-1;

        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==tar){
                exact = true;
                return mid;
            }
            else if(nums[mid]>tar){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return e+1;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        bool exact = false;
        int ind = find_ind(arr,x,exact);
        cout<<ind<<endl;
        cout<<exact<<endl;
        int left,right;
        if(exact == true){
            left = ind-1;
            right = ind;
        }
        else{
            left = ind-1;
            right = ind;
        }
        cout<<"Left: "<<left<<"Right: "<<right<<endl;

        while(left >= 0 && right < arr.size() && k>0){
            int diff_l = x-arr[left];
            int diff_r = arr[right]-x;

            if(diff_l == diff_r){
                if(arr[left] < arr[right]){
                    ans.push_back(arr[left]);
                    k--;
                    left--;
                }
                else{
                    ans.push_back(arr[right]);
                    k--;
                    right++;
                }
            }
            else if(diff_l < diff_r){
                ans.push_back(arr[left]);
                k--;
                left--;
            }
            else if(diff_l > diff_r){
                ans.push_back(arr[right]);
                k--;
                right++;
            }
        }
        while(left >=0 && k>0){
            ans.push_back(arr[left]);
            left--;
            k--;
        }
        while(right < arr.size() && k>0){
            ans.push_back(arr[right]);
            right++;
            k--;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};