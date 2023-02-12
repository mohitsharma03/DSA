//Check if Array Is Sorted and Rotated:
//leetcode: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

class Solution {
public:
    bool isSorted(vector<int>& arr,int l,int r){
      //Your code here
      if(l>=r)  return true;

      for(int i=l;i<=r-1;i++){
          if(arr[i]>arr[i+1]) return false;
      }
       return true;
    }
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==1)  return true;
        int pivotInd=-1;
        for(int i=0;i<=n-2;i++){
            if(nums[i]>nums[i+1]){
                pivotInd=i+1;//index of pivot, pivot=1st min element
                break;
            }
        }
        if(pivotInd==-1)  return true;//if true then array is sorted
        
        bool flag1 = (nums[n-1]<=nums[0]);//if false then array is not rotated
        if(!flag1) return false;

        bool flag2 = isSorted(nums, 0, pivotInd-1);//if true then array is sorted from 1st element to elem bfr pivot
        if(!flag2) return false;

        bool flag3 = isSorted(nums, pivotInd, n-1);//if true then array is sorted from pivot to last elem
        if(!flag3) return false;

        return true;//flag1,flag2,flag3 all are true
    }
};