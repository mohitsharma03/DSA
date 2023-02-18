//Subarray with given sum: find a continuous sub-array which adds to a given number S and return the left and right index(1-based indexing) of that subarray.

//gfg: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

vector<int> subarraySum(vector<int>ar, int n, long long sum)
    {
        vector<int> res;
       int currSum=ar[0];int start=0;
       for(int i=1;i<=n;i++){
           while(currSum>sum && start<i-1){
               currSum -= ar[start];
               start++;
           }
           if(currSum == sum){
               res.push_back(start+1);
               res.push_back(i-1+1);
               return res;
           }
           if(i<n)  currSum += ar[i];
       }
       res.push_back(-1);
       return res;
    }