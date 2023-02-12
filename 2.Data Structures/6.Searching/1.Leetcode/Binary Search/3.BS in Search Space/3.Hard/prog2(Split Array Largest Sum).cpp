//Split Array Largest Sum: Split the given array into K sub-arrays such that maximum sum of all sub arrays is minimum

//gfg: https://practice.geeksforgeeks.org/problems/f04fd67b26b4828b6180715d8b1700426b637247/1
//leetcode: https://leetcode.com/problems/split-array-largest-sum/description/

//driver code not present

//Note: soln is similar to: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

class Solution {
public:
    bool check(vector<int>& nums, int k, int minSum){
        int sum=0;int n=nums.size();int res=1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum>minSum){
                res++;
                sum=nums[i];
            }   
            if(res>k)    return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)    sum += nums[i];

        int l=*max_element(nums.begin(),nums.end());int r= sum;
        int res=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(check(nums,k,mid)){
                res=mid;
                r=mid-1;
            }  
            else    l=mid+1;
        }
        return res;
    }
};
