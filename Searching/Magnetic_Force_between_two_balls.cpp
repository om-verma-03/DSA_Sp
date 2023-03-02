class Solution {
public:
    bool isPossible(vector<int>& position,int m,int mid){
        int c = 1;
        int pos = position[0];

        for(int i=0;i<position.size();i++){    //Basket to jittna position ka size h uttna hi hoga na
            if(position[i]-pos >= mid){
                c++;
                pos = position[i];
            }
            if(c == m){
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());

        int start= 0;
        int end = position[position.size()-1] - position[0];  //Basket ka position highest ham sabse highest wale tkk use krr sakte h(to take out the search space)
        int ans = -1;

        while(start <= end){
            int mid = start + (end-start)/2;
            if(isPossible(position,m,mid)){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }
};