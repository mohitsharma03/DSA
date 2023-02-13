//Longest Sub-Array with Sum K

//gfg: https://bit.ly/3dyZdp3
//leetcode: https://leetcode.com/problems/subarray-sum-equals-k/

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

