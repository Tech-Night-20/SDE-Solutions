    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeIntervals;
        if(intervals.size() == 0)
            return mergeIntervals;
        sort(intervals.begin(), intervals.end());
        vector<int> tempInterval = intervals[0];
        for(auto it : intervals){
            if(it[0] <= tempInterval[1]){
                tempInterval[1] = max(it[1], tempInterval[1]);
            }else{
                mergeIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        mergeIntervals.push_back(tempInterval);
        return mergeIntervals;
    }
