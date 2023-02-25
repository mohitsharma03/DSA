//3Sum
// https://leetcode.com/problems/3sum/description/
    vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int>> res; 
        sort(num.begin(), num.end()); 

        for (int i = 0; i < (int)(num.size())-2; i++) {
            if (i == 0 || (i > 0 && num[i] != num[i-1])) {
                int lo = i+1, hi = (int)(num.size())-1, sum = 0 - num[i];
                while (lo < hi) {
                    if (num[lo] + num[hi] == sum) {
                        vector<int> temp; 
                        temp.push_back(num[i]); 
                        temp.push_back(num[lo]); 
                        temp.push_back(num[hi]); 
                        res.push_back(temp);
                        
                        while (lo < hi && num[lo] == num[lo+1]) lo++;
                        while (lo < hi && num[hi] == num[hi-1]) hi--;
                        
                        lo++; hi--;
                    } 
                    else if (num[lo] + num[hi] < sum) lo++;
                    else hi--;
               }
            }
        }
        return res;
    }    
//Ref: https://takeuforward.org/data-structure/3-sum-find-triplets-that-add-up-to-a-zero/



/***********************************************************************/
//gfg variations:
// https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
// https://practice.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1

//self soln:
    bool find3Numbers(int nums[], int n, int x)//find triplets wch sum upto x
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)  mp[nums[i]]=i+1;//store index of elem, '0' means elem nt present
        for(int i=0;i<n;i++){
            int x1=nums[i];
            int sumRemain = x-nums[i];
            for(int j=i+1;j<n;j++){
                int x2=nums[j];int x3=sumRemain-x2;
                if(mp[x3] && (i!=j && j!=(mp[x3]-1) && (mp[x3]-1)!=i))  return true;
            }
        }
        return false;
    }

/***********************************************************************/
//gfg variations: 3 sum closest
//https://bit.ly/3C9uTvQ

int closest3Sum(int a[], int n, int x)
    {
        sort(a,a+n);
        int diff = INT_MAX;
        int res;
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int sum=(a[i]+a[j]+a[k]);
                if(diff>abs(x-sum)){
                    diff=abs(x-sum);
                    res=sum;
                }
                if(sum>x)   k--;
                else if(sum<x)  j++;
                else    return x;
            }
        }
        return res;
    }