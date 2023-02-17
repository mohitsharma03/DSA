//Top K Frequent Elements
//gfg: https://practice.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1
//leetcode: https://leetcode.com/problems/top-k-frequent-elements/description/

    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }
    static bool cmp2(pair<int, int>& a, pair<int, int>& b){
        if(a.second == b.second)    return a.first > b.first;
        return a.second > b.second;
    }

    vector<int> topK(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int,int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        vector<pair<int,int>> v;

        for (auto& it : freq) {
           v.push_back(it);
        }

        sort(v.begin(), v.end(), cmp);
        sort(v.begin(), v.end(), cmp2);
        int c=0;
        for (auto& it : v) {
            c++;
            res.push_back(it.first);
            if(c==k)    break;
        }

        return res;
    }