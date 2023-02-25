//Second Largest & Second Smallest element in array

//Ref: https://takeuforward.org/data-structure/find-second-smallest-and-second-largest-element-in-an-array/

/*************************************************************************/
//Second Largest:
//gfg: https://practice.geeksforgeeks.org/problems/second-largest3735/1
//leetcode: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/

//gfg soln:
	int print2largest(int arr[], int n) {
	    if(n<2) return -1;
        int large=INT_MIN,second_large=INT_MIN;
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] > large) 
            {
                second_large = large;
                large = arr[i];
            }
     
            else if (arr[i] > second_large && arr[i] != large) 
            {
                second_large = arr[i];
            }
        }
        if(second_large==INT_MIN)  return -1;
        return second_large;
	}

//leetcode:
    int maxProduct(vector<int>& arr) {
        int n=arr.size();
        if(n<2) return -1;
        int large=INT_MIN,second_large=INT_MIN;
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] > large) 
            {
                second_large = large;
                large = arr[i];
            }
     
            else if (arr[i] >= second_large) 
            {
                second_large = arr[i];
            }
        }
        return (large-1)*(second_large-1);
    }

/***********************************************************************/
//Second Smallest:
//gfg; https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1

vector<int> minAnd2ndMin(int arr[], int n) {
    if(n<2) return {-1,-1};
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
    if(small==second_small || small==INT_MAX || second_small==INT_MAX) return {-1,-1};
    return {small,second_small}; 
}    