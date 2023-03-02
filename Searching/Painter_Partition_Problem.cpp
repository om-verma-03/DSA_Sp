class Solution{
  public:
    bool isPossible(int arr[],int n,int k,long long mid){
        long long TimeSum = 0;
        long long c = 1;
        
        for(long long i=0;i<n;i++){
            if(arr[i] > mid){
                return false;
            }
            
            if(TimeSum + arr[i] > mid){
                c++;
                TimeSum = arr[i];
                if(c > k){
                    return false;
                }
            }
            else{
                TimeSum += arr[i];
            }
        }
        return true;
    }
    long long minTime(int arr[], int n, int k){
        
        long long start = 0;
        long long end = 0;
        
        for(int i=0;i<n;i++){
            end += arr[i];
        }
        
        long long ans = -1;
        
        while(start <= end){
            long long mid = (start+end)/2;
            
            if(isPossible(arr,n,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};