//Koko Eating Bananas
//GFG: https://bit.ly/3LSY491
//leetcode:  https://leetcode.com/problems/koko-eating-bananas/description/

//driver code not present

class Solution {
public:
    bool check(vector<int>& piles, int h, int k){
        int res=0;
        for(int i=0;i<piles.size();i++){
            //for getting ceil value of piles[i]/k :
            if(piles[i]%k==0)    res += piles[i]/k;
            else    res += piles[i]/k + 1;
        }
        if(res<=h)    return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;int r= *max_element(piles.begin(),piles.end());
        while(l<r){//dont do l<=r, else loop will be infinite
            int mid=(l+r)/2;
            if(check(piles,h,mid))  r=mid;
            else    l=mid+1;
        }
        return r;
    }
};
