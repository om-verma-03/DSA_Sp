#include<bits/stdc++.h>
using namespace std;

bool is_Safe(vector<vector<char>>& arr,int row,int col,int n){

    int i = row;
    int j = col;

    //Check Row
    while(j >= 0){
        if(arr[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    i = row;
    j = col;
    //Check Upper Left Diagonal
    while(i >= 0 && j >= 0){
        if(arr[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }

    i = row;
    j = col;
    //Check Bottom Left Diagonal
    while(i < n && j >= 0){
        if(arr[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }

    //Kahi pe bhi queen nhi mili
    //So returning True Finally
    return true;
}
void print_board(vector<vector<char>>& arr,int n){
    //Printing the board
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<arr[row][col]<<" ";
        }cout<<endl;
    }
    cout<<endl;
}
void N_queen(vector<vector<char>>& arr,int col,int n){
    //Base Case
    if(col >= n){
        print_board(arr,n);       //Printin the board if col jo h saare row me push krrte krrte last me pahuch jaye
        return;
    }

    for(int row=0;row<n;row++){
        if(is_Safe(arr,row,col,n)){
            arr[row][col] = 'Q';      //[Row][Col] me 'Q' daal ke dekh rhe h kya shi h

            N_queen(arr,col+1,n);

            arr[row][col] = '-';      //Wapis aate waqt usse hata de rhe h
        }
    }
}
int main(){
    int n = 4;
    vector<vector<char>> arr(n,vector<char>(n,'-'));

    N_queen(arr,0,n);
    return 0;
}