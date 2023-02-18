//Subarrays with given sum: find the number of continuous subarrays having sum exactly equal to a given number k.

//leetcode: https://leetcode.com/problems/subarray-sum-equals-k/
//gfg: https://practice.geeksforgeeks.org/problems/subarray-range-with-given-sum2804/1
//gfg: https://practice.geeksforgeeks.org/problems/subarray-range-with-given-sum0128/1
//gfg: https://practice.geeksforgeeks.org/problems/subarrays-with-sum-k/1

    int subarraySum(vector<int>& ar, int sum) {
        unordered_map<int,int> prevSum;
        int curr_sum=0;
        int count=0;
        int n=ar.size();
        for(int i=0;i<n;i++){
            curr_sum += ar[i];
            if(curr_sum==sum){
                count++;
            }
            if(prevSum.find(curr_sum-sum) != prevSum.end()){
                count += prevSum[curr_sum-sum];
            }
            prevSum[curr_sum]++;
        }
        return count;
    }
