//Median of 2 Sorted Arrays of Different Size:

//gfg: https://bit.ly/3K1HwL4
//leetcode: https://leetcode.com/problems/median-of-two-sorted-arrays/description/

//driver code not present

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();int n2=nums2.size();
        if(n1>n2)   return findMedianSortedArrays(nums2,nums1);
        int l=0;int r=n1;
        while(l<=r){
            int cut1 = (l+r)/2;
            int cut2 = (n1+n2+1)/2 - cut1;
            int left1 = (cut1==0) ? INT_MIN : nums1[cut1-1]; int right1 = (cut1==n1) ? INT_MAX : nums1[cut1];
            int left2 = (cut2==0) ? INT_MIN : nums2[cut2-1]; int right2 = (cut2==n2) ? INT_MAX : nums2[cut2];
            if(left1<=right2 && left2<=right1){
                int N=n1+n2;
                if(N%2!=0)  return max(left1,left2);
                else{
                    double mid1=max(left1,left2); double mid2=min(right1,right2);
                    return (mid1+mid2)/2;
                }
            }
            if(left1>right2)    r=cut1-1;
            else    l=cut1+1;
        }
        return -1.0;
    }
};
