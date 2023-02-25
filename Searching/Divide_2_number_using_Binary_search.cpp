#include<iostream>
using namespace std;

int divide(int dividend,int divisor){
    int s = 0;
    int e = abs(dividend);
    int ans = -1;

    int mid = s +(e-s)/2;

    while(s<=e){
        if(mid*abs(divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        if(mid*abs(divisor) < abs(dividend)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }

    if((dividend>0 && divisor>0) || (dividend<0 && divisor<0)){
        return ans;
    }
    else{
        return -ans;
    }
}
int main(){
    int dividend = -11;
    int divisor = 4;
    
    int ans = divide(dividend,divisor);
    cout<<"Quotient is: "<<ans<<endl;

    int precision;
    cout<<"Enter the precision: ";
    cin>>precision;

    double fin_ans = abs(ans);
    double step = 0.1;
    
    for(int i=0;i<precision;i++){
        for(double j=fin_ans;j*divisor<=abs(dividend);j=j+step){
            fin_ans = j;
        }
        step = step/10;
    }

    if(ans>0)
        cout<<"Final Answer in points is: "<<fin_ans<<endl;
    else
        cout<<"Final Answer in points is: "<<-fin_ans<<endl;
    return 0;
}