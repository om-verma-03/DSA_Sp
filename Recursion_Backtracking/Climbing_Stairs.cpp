class Solution {
public:
    int climb(int n,vector<int>& dp){
        if(n <= 1){
            return 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }

        return dp[n] = climb(n-1,dp)+climb(n-2,dp);
    }
    int climbStairs(int n) {
        if(n == 1){
            return 1;
        }
        vector<int> dp(n,-1);
        return climb(n-1,dp)+climb(n-2,dp);
    }
};

//This is giving TLE 
//SO now I have to apply DP
//First I will apply top-Down