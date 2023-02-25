//Intersection Of Arrays
//Ref: https://takeuforward.org/data-structure/intersection-of-two-sorted-arrays/

/*******************************************************************/
//Intersection of Two Arrays
//leetcode: https://leetcode.com/problems/intersection-of-two-arrays/description/
//gfg: https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays2404/1

    vector<int> intersection(vector<int>& A, vector<int>& B) {
        sort(A.begin(),A.end());sort(B.begin(),B.end());
        vector < int > ans;unordered_set<int> s;
        int i = 0, j = 0;
        while (i < A.size() && j < B.size()) {
            if (A[i] < B[j])    i++;
            else if (B[j] < A[i])   j++;
            else {
                s.insert(A[i]);
                i++;
                j++;
            }
        }
        for(auto x:s)   ans.push_back(x);
        return ans;
    }

/*******************************************************************/
//Intersection of Two Arrays II
//leetcode: https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

    vector<int> intersect(vector<int>& A, vector<int>& B) {
        sort(A.begin(),A.end());sort(B.begin(),B.end());
        vector < int > ans;
        int i = 0, j = 0;
        while (i < A.size() && j < B.size()) {
            if (A[i] < B[j])    i++;
            else if (B[j] < A[i])   j++;
            else {
                ans.push_back(A[i]);
                i++;
                j++;
            }
        }
        return ans;
    }

/*******************************************************************/
//Intersection of Multiple Arrays
//leetcode: https://leetcode.com/problems/intersection-of-multiple-arrays/description/

    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        if(nums.size()==1)  ans = nums[0];
        else    ans = intersectionArr(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            ans = intersectionArr(nums[i],ans);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    vector<int> intersectionArr(vector<int>& A, vector<int>& B) {
        sort(A.begin(),A.end());sort(B.begin(),B.end());
        vector < int > ans;unordered_set<int> s;
        int i = 0, j = 0;
        while (i < A.size() && j < B.size()) {
            if (A[i] < B[j])    i++;
            else if (B[j] < A[i])   j++;
            else {
                s.insert(A[i]);
                i++;
                j++;
            }
        }
        for(auto x:s)   ans.push_back(x);
        return ans;
    }    
