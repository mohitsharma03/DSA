//LargestSubarrayWith0Sum

//gfg: https://bit.ly/3w5QSzC

    int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        unordered_map<int, int> map;
        int sum = 0, maxLen = 0;
        int k=0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (sum == k)   maxLen = i + 1;

            if (map.find(sum) == map.end())
                map[sum] = i;
     
            if (map.find(sum - k) != map.end()) {
                if (maxLen < (i - map[sum - k]))
                    maxLen = i - map[sum - k];
            }
        }
    
        return maxLen;
    }