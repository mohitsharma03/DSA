//Merge Overlapping Intervals

//leetcode: https://leetcode.com/problems/merge-intervals/description/
//gfg: https://bit.ly/3zRz904

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        for (int i = 0; i < intervals.size(); i++) {
            if (merged.empty() || merged.back()[1] < intervals[i][0]) {
                vector<int> v = {intervals[i][0], intervals[i][1]};
                merged.push_back(v);
            } 
            else    merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
        return merged;
    }

//Ref: https://takeuforward.org/data-structure/merge-overlapping-sub-intervals/