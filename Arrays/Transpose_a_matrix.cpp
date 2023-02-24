#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v;
    int trans[3][3];
    vector<int> res;

    for(int i=0;i<3;i++){
        vector<int> temp;
        for(int j=0;j<3;j++){
            int n;
            cin>>n;
            temp.push_back(n);
        }
        v.push_back(temp);
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<j<<" "<<i<<"---->"<<i<<" "<<j<<endl;
            trans[i][j] = v[j][i];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<trans[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}