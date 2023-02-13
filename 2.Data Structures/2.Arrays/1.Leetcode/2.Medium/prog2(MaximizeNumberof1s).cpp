//Maximize Number of 1's: Find zeroes to be flipped so that number of consecutive 1’s is maximized

//gfg: https://bit.ly/3piuaAN
//leetcode: https://leetcode.com/problems/max-consecutive-ones-iii/description/


/*Meth1(Naive): T=O(n^2)
A Simple Solution is to consider every subarray by running two loops. For every subarray, 
count number of zeroes in it. Return the maximum size subarray with m or less zeroes. 
*/


/*Meth2: 
For all positions of 0’s calculate left[] and right[] which defines the number of consecutive 1’s 
to the left of i and right of i respectively. 
T=O(n),S=O(n)
*/

//Meth3: Using 'Sliding window' technique: T=O(n),S=O(1)
int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int wL=0;int wR=0;//left and right index of current window 
        int zeroCount=0;//count of 0s in current window
        int maxWSize=0;//size of max window with less than k 0s
        int maxWL;//start index of window with max window size
        while(wR<n){
            if(zeroCount<=k){
                if(nums[wR]==0) zeroCount++;
                wR++;
            }
            if(zeroCount>k){
                if(nums[wL]==0) zeroCount--;
                wL++;
            }
            if(wR-wL>maxWSize && zeroCount<=k){
                maxWSize=wR-wL;
                //maxWL=wL;//needed if we want to print the array elements with widest window
            }
        }
        //for(int i=0;i<maxWSize;i++) cout<<nums[maxWL+i]<<" ";//needed if we want to print the array elements with widest window
        //cout<<endl;
        return maxWSize;
    }