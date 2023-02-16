//Single Number: Find the element that appears once

//gfg: https://bit.ly/3dudCD8
//leetcode ques1: https://leetcode.com/problems/single-number/
//leetcode ques2: https://leetcode.com/problems/single-number-ii/description/
//leetcode ques3: https://leetcode.com/problems/single-number-iii/description/

//using map: T=O(n),S=O(n)
int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++)    freq[nums[i]]++;
        for(int i=0;i<n;i++){
            if(freq[nums[i]]==1)    return nums[i];
        } 
        return -1;   
    }

//For more optimized solns, refer: https://www.geeksforgeeks.org/find-the-element-that-appears-once/