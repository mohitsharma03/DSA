//Find the Smallest Divisor Given a Threshold:

//gfg: https://bit.ly/3SJogFR
//leetcode: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

//driver code not present

class Solution {
public:
    bool check(vector<int>& nums, int threshold, int t){
        int res=0;
        for(int i=0;i<nums.size();i++){
            //for getting ceil value of piles[i]/k :
            if(nums[i]%t==0)    res += nums[i]/t;
            else    res += nums[i]/t + 1;
        }
        if(res<=threshold)    return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;int r= *max_element(nums.begin(),nums.end());
        while(l<r){//dont do l<=r, else loop will be infinite
            int mid=(l+r)/2;
            if(check(nums,threshold,mid))  r=mid;
            else    l=mid+1;
        }
        return r;
    }
};
