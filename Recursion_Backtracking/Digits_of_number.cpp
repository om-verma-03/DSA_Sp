#include<iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }

    cout<<n%10<<" ";
    n = n/10;
    print(n);
}
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    print(n);
    return 0;
}