//Capacity To Ship Packages Within D Days:

//gfg: https://bit.ly/3PBInmS
//leetcode: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

//driver code not present

class Solution {
public:
    bool check(vector<int>& weights, int days, int capacity){
        int sum=0;int n=weights.size();int res=1;
        for(int i=0;i<n;i++){
            sum += weights[i];
            if(sum>capacity){
                res++;
                sum=weights[i];
            }   
            if(res>days)    return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        for(int i=0;i<n;i++)    sum += weights[i];

        int l=*max_element(weights.begin(),weights.end());int r= sum;
        int res=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(check(weights,days,mid)){
                res=mid;
                r=mid-1;
            }  
            else    l=mid+1;
        }
        return res;
    }
};
