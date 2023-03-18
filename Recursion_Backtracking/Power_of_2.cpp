#include<iostream>
using namespace std;

int find_pow(int n){
    if(n == 1){
        return 2;
    }

    return 2*find_pow(n-1);
}
int main(){
    int pow;
    cin>>pow;

    cout<<find_pow(pow);
    return 0;
}