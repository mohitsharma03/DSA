//Maximum Subarray Sum, Kadanes Algo

//leetcode: https://leetcode.com/problems/maximum-subarray/description/
//gfg: https://bit.ly/3dzyloY

    int maxSubArray(vector<int>& nums) {
        int sum=0;int maxsum=INT_MIN;int n=nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum>maxsum)   maxsum=sum;
            if(sum<0)   sum=0;
        }
        return maxsum;
    }

//returning the array with maxsum:
vector<int> findSubarray(int nums[], int n) {
	    int sum=0;int maxsum=INT_MIN;int s=0,start=0,end=0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum>maxsum){
                maxsum=sum;
                start=s;end=i;
            } 
            if(sum<0){
                sum=0;
                s=i+1;
            }   
        }
        vector<int> res;
        for(int i=start;i<=end;i++) res.push_back(nums[i]);
        return res;
	}