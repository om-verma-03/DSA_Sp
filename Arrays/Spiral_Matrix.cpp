class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top = 0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        int dir = 1;
        vector<int> ans;

        while(top <= bottom && left <= right){
            if(dir == 1){                      //Moving from left to right
                for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
                dir = 2;
            }
            else if(dir == 2){                 //Moving from top to bottom
                for(int i=top;i<=bottom;i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
                dir = 3;
            }
            else if(dir == 3){                 //Moving from right to left
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
                dir = 4;
            }
            else if(dir == 4){                 //Moving from bottom to up
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
                dir = 1;
            }
        }
        return ans;
    }
};