//2-sum

//leetcode: https://leetcode.com/problems/two-sum/description/
//gfg: https://bit.ly/3SVYU8f

vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target)    return {i,j};
            }    
        }
        return {-1,-1};
    }

//for more optimized approach, chk: https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/