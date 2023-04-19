#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(vector<int>& prices,int i,int& max_profit,int& min_price){
        //Base case
        if(i >= prices.size()){
            return;
        }

        if(prices[i] < min_price){
            min_price = prices[i];
        }
        if(prices[i] - min_price > max_profit){
            max_profit = prices[i] - min_price;
        }

        solve(prices,i+1,max_profit,min_price);
    }
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = INT_MIN;
        solve(prices,0,max_profit,min_price);
        return max_profit;
    }
};