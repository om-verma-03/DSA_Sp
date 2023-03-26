#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool is_Safe(vector<vector<int>>& arr,vector<vector<bool>>& visited,int newX,int newY){
        int n=  arr.size();
        if((newX >= 0 && newX < n) && (newY >= 0 && newY < n) && (visited[newX][newY] == false) && arr[newX][newY] == 1){
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>>& arr,int x,int y,vector<string>& path,string output,vector<vector<bool>>& visited){
        if(x == arr.size()-1 && y == arr.size()-1){
            path.push_back(output);
            return;
        }
        
        
        //Check_Down
        if(is_Safe(arr,visited,x+1,y) == true){
            visited[x][y] = true;
            
            solve(arr,x+1,y,path,output+'D',visited);
            
            visited[x][y] = false;        //BackTrack
        }
        
        //Check_Left
        if(is_Safe(arr,visited,x,y-1) == true){
            visited[x][y] = true;
            
            solve(arr,x,y-1,path,output+'L',visited);
            
            visited[x][y] = false;         //BackTrack
        }
        
        //Check_Right
        if(is_Safe(arr,visited,x,y+1) == true){
            visited[x][y] = true;
            
            solve(arr,x,y+1,path,output+'R',visited);
            
            visited[x][y] = false;         //BackTrack
        }
        
        //Check_Up
        if(is_Safe(arr,visited,x-1,y) == true){
            visited[x][y] = true;
            
            solve(arr,x-1,y,path,output+'U',visited);
            
            visited[x][y] = false;          //BackTrack
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<bool>> visited(n,vector<bool>(n,false));
        
        vector<string> path;   //For storing valid path
        string output = "";    //For creating the path
        
        if(m[0][0] == 0){      //If First step has 0 then path not possible
            return path;
        }
        
        solve(m,0,0,path,output,visited);
        return path;
    }
};