//Minimum number of jumps to reach end

//gfg: https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
//leetcode ques1: https://leetcode.com/problems/jump-game/description/
//leetcode ques2: https://leetcode.com/problems/jump-game-ii/description/

int minJumps(int arr[], int n){
        int jumps=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==0)   return -1;
            if(i+arr[i]>=n-1){
                jumps++;
                break;
            }
            int ind=i+1;int tempJump=arr[i+1];
            for(int j=1;j<=arr[i];j++){
                if((i+j)<n && (arr[i+j]+i+j)>(arr[ind]+ind)){
                    tempJump=arr[i+j];
                    ind=i+j;
                }
            }
            jumps++;
            i=ind-1;
        }
        return jumps;
    }