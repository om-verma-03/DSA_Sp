#include<iostream>
#include<vector>
using namespace std;

int Sieve(int n){
    int count = 0;

    vector<bool> primes(n+1,true);

    primes[0] = false;
    primes[1] = false;

    for(int i=2;i<=n;i++){
        if(primes[i] == true){
            count++;

            for(int j=i;j<=n;j+=i){
                primes[j] = false;
            }
        }
    }
    return count;
}
int main(){
    int count = Sieve(5);
    cout<<"Count of total primes till n is: "<<count; 
    return 0;
}
