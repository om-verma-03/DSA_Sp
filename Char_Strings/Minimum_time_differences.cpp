class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {       //This is the cleanest way
        vector<int> minutes;

        for(int i=0;i<timePoints.size();i++){
            string time = timePoints[i];

            int hours = stoi( time.substr(0,2) );
            int min = stoi( time.substr(3,2) );
            cout<<"Hours:"<<hours<<" ";
            cout<<"Minutes:"<<min<<" ";


            int tot_min = hours*60 + min;
            minutes.push_back(tot_min);
            cout<<"Total Minutes:"<<tot_min<<endl;
        }

        sort(minutes.begin(),minutes.end());

        int mini = INT_MAX;

        for(int i=0;i<minutes.size()-1;i++){
            mini = min(mini,minutes[i+1]-minutes[i]);
        }

        mini = min(mini,minutes[0] + 1440 -minutes[minutes.size()-1]);

        return mini;
    }
};