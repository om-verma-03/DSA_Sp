#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v;
    vector<int> res;

    for(int i=0;i<3;i++){
        vector<int> temp;
        for(int j=0;j<3;j++){
            int n;
            cout<<"Enter "<<i<<" "<<j<<" :";
            cin>>n;
            temp.push_back(n);
        }
        v.push_back(temp);
    }

    for(int i=0;i<3;i++){
        int ans = 0;
        for(int j=0;j<3;j++){
            ans+=v[j][i];     //For rwo wise sum: arr[i][j]
        }
        res.push_back(ans);
    }

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
    return 0;
}