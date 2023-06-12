#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    long long merge(long long arr[],vector<long long>& temp,long long start,long long mid,long long end){
        long long i = start,j = mid+1,k = start;
        
        long long c = 0;
        while(i <= mid && j <= end){   //Issme mai First or Second array banane k bajaye original me hi half half traverse krr rha hu
            if(arr[i] <= arr[j]){    //Or Temp me hi daal de rha h(Instead Real merge Sort me ham Original arr me dalte the baad me)
                temp[k++] = arr[i++];
            }
            else{   //arr[i] > arr[j]     Means Inversion me count ho sakta h
                temp[k++] = arr[j++];
                c += mid-i+1;
            }
        }
        
        while(i <= mid){
            temp[k++] = arr[i++];
        }
        while(j <= end){
            temp[k++] = arr[j++];
        }
        
        while(start <= end){
            arr[start] = temp[start];
            start++;
        }
        return c;
    }
    long long int mergeSort(long long arr[],vector<long long>& temp,long long start,long long end){
        if(start >= end){
            return 0;
        }
        
        long long mid = start+(end-start)/2;
        long long int c = 0;
        
        c += mergeSort(arr,temp,start,mid);
        c += mergeSort(arr,temp,mid+1,end);
        c += merge(arr,temp,start,mid,end);
        return c;
    }
    long long int inversionCount(long long arr[], long long N){
        vector<long long> temp(N,0);
        
        return mergeSort(arr,temp,0,N-1);
    }

};