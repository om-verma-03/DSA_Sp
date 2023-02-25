#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>& arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = (s+e)/2;

    while(s<=e){
        if(s == e){
            return s;
        }
        if(mid%2 == 0){   //Mid is even
            if(arr[mid] == arr[mid+1]){    //Ham left me khade h
                s = mid+2;
            }
            else{ //arr[mid] != arr[mid+1]
                e = mid;
            }
        }
        else{ //Mid is Odd
            if(arr[mid] == arr[mid-1]){    //Ham left me khade h
                s = mid+1;
            }
            else{ //arr[mid] != arr[mid-1]   //Ya to mid-1 pe answer h ya to mid-1 ke peeche lie krrega
                e = mid-1;                 
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}
int main(){
    vector<int> arr = {1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = solve(arr);
    cout<<"Odd Occuring Element is: "<<ans;
    return 0;
}