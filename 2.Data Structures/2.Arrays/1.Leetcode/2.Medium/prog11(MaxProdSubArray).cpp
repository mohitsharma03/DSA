//Maximum Product Subarray

//leetcode: https://leetcode.com/problems/maximum-product-subarray/description/
//gfg: https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1

//Modified Kadane's algo:
    long long maxProduct(vector<int> nums, int n) {
	    long long prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
        for(int i=1;i<nums.size();i++) {
            long long temp = max({nums[i]*1ll,prod1*nums[i],prod2*nums[i]});
            prod2 = min({nums[i]*1ll,prod1*nums[i],prod2*nums[i]});
            prod1 = temp;
            
            result = max(result,prod1);
        }
        
        return result;
	}

//Ref: https://www.geeksforgeeks.org/maximum-product-subarray/