//Kth Missing Positive Number:k-th missing element in sorted array

//gfg(ques is a bit diffrnt): https://bit.ly/3bUFY9l
//leetcode: https://leetcode.com/problems/kth-missing-positive-number/description/

//driver code not present

/*Soln1(Naive): Uisng Map: T=O(n+m), m=diff b/w largest & smallest elem in arr, S=O(n)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int, int> umap;int n=arr.size();
        int mins = INT_MAX; int maxs = INT_MIN;
        for (int i = 0; i < n; i++) umap[arr[i]] = 1; // visited
        int counts = 0;int i=1;
        while(counts<=k){
            if (umap[i]!=1)   counts++;
            if (counts == k)    return i;
            i++;
        }
        return -1;
    }
};
*/

/*
//Soln2(Simple): T=O(n),S=O(1)
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int difference=0;int missingCount=0;
        if(arr[0]!=1){
            difference = arr[0]-1;
            if(difference>=k)   return k;
            else    missingCount += difference;
        }
        int n=arr.size();int i;
        for(i=0;i<n-1;i++){
            difference=arr[i+1]-arr[i]-1;
            missingCount += difference;
            if(missingCount==k) return arr[i]+difference;
            if(missingCount>k){
                missingCount -= difference;
                return arr[i]+ (k-missingCount);
            }  
        }
        if(missingCount<k)  return arr[i]+ (k-missingCount);
        return -1;
    }
};*/

//Soln3(Using Binary Seaarch): T=O(logn),S=O(1):
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int missingCount=0;
        int l=0;int r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            missingCount = arr[mid] - (mid+1);//main property
            if(missingCount==k){
                if( mid>0 && (arr[mid-1]-mid)==k ){
                    r=mid-1;
                    continue;
                }
                return arr[mid]-1;
            }
            if(missingCount>k)  r=mid-1;
            else if(missingCount<k) l=mid+1;
        }
        if(r<0) return k;//if(arr[0]!=1)
        missingCount = arr[r]-(r+1);
        return arr[r] + (k-missingCount);//if(missingCount<k)  
    }
};