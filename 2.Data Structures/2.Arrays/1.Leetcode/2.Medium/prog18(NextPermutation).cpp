//Next Permutation

//leetcode: https://leetcode.com/problems/next-permutation/description/
//gfg: https://bit.ly/3dug78u

    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1])  break;
        }
    	if (k < 0)  reverse(nums.begin(), nums.end());
        else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }

//Ref: https://takeuforward.org/data-structure/next_permutation-find-next-lexicographically-greater-permutation/