//Missing Number

//gfg: https://bit.ly/3A2pKTh
//leetcode; https://leetcode.com/problems/missing-number/description/

int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)    sum+=nums[i];
        int nSum = n*(n+1)/2;
        return nSum-sum;
    }