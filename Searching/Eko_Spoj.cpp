#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<long long>& trees,long long m,long long mid){
    int WoodCollected = 0;

    for(int i=0;i<trees.size();i++){
        if(trees[i] > mid){
            WoodCollected += trees[i]-mid;
        }
    }
    return WoodCollected >= mid;
}

long long sawBlade(vector<long long>& trees,long long m){
    long long start = 0;
    long long end = *max_element(trees.begin(),trees.end());
    long long ans = -1;

    while(start <= end){
        long long mid = start + (end-start)/2;

        if(isPossible(trees,m,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    
    return 0;
}
