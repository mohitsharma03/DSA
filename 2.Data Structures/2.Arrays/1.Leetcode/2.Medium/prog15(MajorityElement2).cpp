//Majority Element II: Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

//leetcode: https://leetcode.com/problems/majority-element-ii/
//gfg: https://bit.ly/3ULsluv

    vector<int> majorityElement(vector<int>& a) {
        unordered_map<int,int> map;vector<int> res;
        unordered_map<int,int> flag;
        int max=0;int n=a.size();
        for(int i=0;i<n;i++){
            map[a[i]]++;
            int t=map[a[i]];
            if(t>n/3 && flag[a[i]]!=1){
                res.push_back(a[i]);
                flag[a[i]]=1;
            }
        }
        return res;
    }