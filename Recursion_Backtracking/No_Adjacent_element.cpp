#include<bits/stdc++.h>
using namespace std;

void No_Adj(vector<int>& arr,int ind,int sum,int& maxi){
    if(ind >= arr.size()){
        maxi = max(maxi,sum);
        return;
    }

    //Include
    No_Adj(arr,ind+2,sum+arr[ind],maxi);

    //Exclude
    No_Adj(arr,ind+1,sum,maxi);
}
int main(){
    vector<int> arr = {2,1,4,9};

    int sum = 0;
    int maxi = INT_MIN;
    int ind = 0;

    No_Adj(arr,ind,sum,maxi);
    cout<<maxi<<endl;

    return 0;
}