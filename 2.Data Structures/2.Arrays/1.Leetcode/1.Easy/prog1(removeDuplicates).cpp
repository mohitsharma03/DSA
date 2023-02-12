//Remove Duplicates from Sorted Array:
//gfg:https://bit.ly/3w7b6ck
//leetcode:https://leetcode.com/problems/remove-duplicates-from-sorted-array/

int removeDuplicates(vector<int>& ar) {
        int j=0;
        for(int i=0;i<ar.size();i++){ 
            if(ar[i]!=ar[j]){
                swap(ar[i],ar[j+1]);
                j++;
            }
        }
        return j+1;
    }