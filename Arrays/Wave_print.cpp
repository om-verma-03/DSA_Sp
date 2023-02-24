#include <bits/stdc++.h>
using namespace std;

void wave_print(vector<vector<int>>& wave){
    bool top_bott = true;
    for(int j=0;j<4;j++){
        if(top_bott){
            for(int i=0;i<4;i++){
                cout<<wave[i][j]<<" ";
            }
            top_bott = !top_bott;
        }
        else if(top_bott == false){
            for(int i=3;i>=0;i--){
                cout<<wave[i][j]<<" ";
            }
            top_bott = !top_bott;
        }
    }
}
int main(){
    vector<vector<int>> v = {{1,2,3,4}
                            ,{5,6,7,8,}
                            ,{9,10,11,12}
                            ,{13,14,15,16}};
    
    wave_print(v);
    return 0;
}