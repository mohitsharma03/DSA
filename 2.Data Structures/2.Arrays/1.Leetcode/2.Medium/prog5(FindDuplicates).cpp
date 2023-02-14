//Find All Duplicates in an Array
//leetcode: https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

//meth1:using map:
vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> freq;
        unordered_set<int> s;
        int n=nums.size();
        vector<int> res;
        for(int i=0;i<n;i++)    freq[nums[i]]++;
        for(int i=0;i<n;i++){
            if(freq[nums[i]]>=2)    s.insert(nums[i]);
        } 
        for(auto &it: s)   res.push_back(it);
        return res;
    }

//Other variatns & solns:
//https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/
//https://www.geeksforgeeks.org/find-duplicates-given-array-elements-not-limited-range/

//gfg ques1: https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
//gfg ques2: https://practice.geeksforgeeks.org/problems/duplicate-elements/1
