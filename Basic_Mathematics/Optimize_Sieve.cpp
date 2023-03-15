#include<iostream>
#include<vector>
using namespace std;

int Sieve(int n){
    int count = 0;

    vector<bool> primes(n+1,true);

    primes[0] = false;
    primes[1] = false;

    for(int i=0;i*i<=n;i++){      //Optimization 2      
        if(primes[i] == true){
            count++;

            for(int j=i*i;j<=n;j+=i){ //Optimization 1 
                primes[j] = false;  //First numarked number should be i as others have been marked by 2 to (i-1)
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