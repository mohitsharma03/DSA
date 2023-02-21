//Longest Consecutive Sequence: Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

//leetcode: https://leetcode.com/problems/longest-consecutive-sequence/description/
//gfg: https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;int res=0;
        for(int i=0;i<nums.size();i++)  s.insert(nums[i]);
        for(int i=0;i<nums.size();i++){
            int j=nums[i];
            if(s.find(j-1)==s.end()){//check if current element is the starting point of a consecutive sequence
                while(s.find(j)!=s.end())   j++;//calc length of consecutive sequence
            }
            res=max(res,j-nums[i]);//j-nums[i]=total elements b/w nums[i] & j-1
        }
        return res;
    }