//Merge Sorted Arrays(Easy)
//leetcode: https://leetcode.com/problems/merge-sorted-array/description/

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res(m+n);
        int i=0,j=0;
        for(int k=0;k< m+n;k++){
            if(i>=m)    res[k]=nums2[j++];
            else if(j>=n)      res[k] = nums1[i++];
            else if(nums1[i]<=nums2[j])     res[k] = nums1[i++];
            else        res[k]=nums2[j++];
        }
        //nums1.resize(m+n);
        for(int p=0;p<m+n;p++)  nums1[p]=res[p];//storing sorted array in nums1[]
    }

/***************************************************************************************/
//Merge Sorted Arrays Without Extra Space
//gfg: https://bit.ly/3zRzmAo
//Ref: https://takeuforward.org/data-structure/merge-two-sorted-arrays-without-extra-space/
        void merge(long long ar1[], long long ar2[], int n, int m) { 
              int gap = ceil((float)(n + m) / 2);
              while (gap > 0) {
                int i = 0;
                int j = gap;
                while (j < (n + m)) {
                  if (j < n && ar1[i] > ar1[j])     swap(ar1[i], ar1[j]);
                  else if (j >= n && i < n && ar1[i] > ar2[j - n])      swap(ar1[i], ar2[j - n]);
                  else if (j >= n && i >= n && ar2[i - n] > ar2[j - n])     swap(ar2[i - n], ar2[j - n]);
                  j++;
                  i++;
                }
                if (gap == 1)   gap = 0;
                else    gap = ceil((float) gap / 2);
              }
        }


