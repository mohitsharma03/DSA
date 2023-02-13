//Find Duplicate: Given an array arr[] containing n + 1 integers where each integer 
//is between 1 and n (inclusive). There is only one duplicate element, find the duplicate element

//meth1: using sorting:T=O(nlogn)
int findDuplicate(vector < int > & arr) {
  int n = arr.size();
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      return arr[i];
    }
  }
}

//meth2: Using freq array to calc frequency: T=O(n),S=O(n)
int findDuplicate(vector < int > & arr) {
  int n = arr.size();
  int freq[n + 1] = {0};
  for (int i = 0; i < n; i++) {
    if(freq[arr[i]] == 0)  freq[arr[i]] += 1;
    else    return arr[i];
  }
  return 0;
}

//meth3: Linked List cycle method: T=O(n),S=O(1)
int findDuplicate(vector < int > & nums) {
  int slow = nums[0];
  int fast = nums[0];
  do {
    slow = nums[slow];
    fast = nums[nums[fast]];
  } while (slow != fast);
  fast = nums[0];
  while (slow != fast) {
    slow = nums[slow];
    fast = nums[fast];
  }
  return slow;
}

//meth4: Using XOR Operator: T=O(n),S=O(1)
int findDuplicate(int arr[] , int n){
    int answer=0;
    for(int i=0; i<n; i++)  answer=answer^arr[i];//XOR all the elements with 0
    for(int i=1; i<n; i++)  answer=answer^i;//XOR all the elements with no from 1 to n i.e   answer^0 = answer
    return answer;
}

//Other variatn:
//Find the Duplicate Number: Find duplicates in a given array when elements are not limited to a range
//leetcode: https://leetcode.com/problems/find-the-duplicate-number/description/

//meth1: using two loops: T=O(n^2)

//meth2: Using map to calc frequency: T=O(n),S=O(n)
int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++)    freq[nums[i]]++;
        for(int i=0;i<n;i++){
            if(freq[nums[i]]>=2)    return nums[i];
        } 
        return -1;  
    }

//meth3(using bin srch): T=O(nlogn),S=O(1)
int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());//sort array for binary search
        for(int i = 0 ; i < n ;i++){
            //index of first and last occ of nums[i];
            int first_index = lower_bound(nums.begin(),nums.end(),nums[i])- nums.begin();
            int last_index = upper_bound(nums.begin(),nums.end(),nums[i])- nums.begin()-1;
            int occur_time = last_index-first_index+1;//frequency of nums[i]
            if(occur_time > 1 ) return nums[i];
        }
        return -1;
    }


