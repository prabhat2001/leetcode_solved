class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int prev_y = intervals[0][1];
        int count = 0;
        for(int i=1; i<intervals.size(); i++) {
            int curr_x = intervals[i][0];
            int curr_y = intervals[i][1];
            if(curr_x < prev_y) {
                count++;
                prev_y = min(curr_y, prev_y);
            } else prev_y = curr_y;
        }
        return count;
    }
};