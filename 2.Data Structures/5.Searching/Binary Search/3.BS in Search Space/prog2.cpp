//Minimum Number of Days to Make m Bouquets
//GFG: https://bit.ly/3CJ9Ezm
//leetcode: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

//driver code not present

class Solution {
public:
    bool check(vector<int>& bloomDay, int m, int k, int days){
        int res=0;int n=bloomDay.size();
        for(int i=0;i<n;i++){
            int c=0;
            while(i<n && bloomDay[i]<=days && c<k){c++;i++;}
            if(c==k)    res++;
            if(i<n && bloomDay[i]<=days)    i--;
        }
        if(res>=m)  return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=1;int r= *max_element(bloomDay.begin(),bloomDay.end());
        int res=-1;
        if((double)m*k > bloomDay.size()) return res;
        while(l<=r){
            int mid=(l+r)/2;
            if(check(bloomDay,m,k,mid)){  
                r=mid;res=mid;
                if(l==r)    break;//if not check this then loop will be infinite
            }
            else    l=mid+1;
        }
        return res;
    }
};
