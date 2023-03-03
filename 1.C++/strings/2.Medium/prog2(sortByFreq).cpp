//Sort Characters By Frequency
//leetcode: https://leetcode.com/problems/sort-characters-by-frequency/description/

//Sorting Elements of an Array by Frequency
//gfg: https://bit.ly/3dEQp1d

/**************************LEETCODE*****************************/
class Solution {
public:
    static bool cmp1(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }

    /*static bool cmp2(pair<int, int>& a, pair<int, int>& b){
        if(a.second == b.second)    return a.first < b.first;
        return a.second > b.second;
    }*/
    string frequencySort(string nums) {
        string res;
        unordered_map<int,int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        vector<pair<int,int>> v;

        for (auto& it : freq) {
           v.push_back(it);
        }

        sort(v.begin(), v.end(), cmp1);
        //sort(v.begin(), v.end(), cmp2);

        for (auto& it : v) {
            for(int i=0;i<it.second;i++){
                res.push_back(it.first);
            }
        }

        return res;
    }
};

/**************************GFG*****************************/
#include<bits/stdc++.h>
using namespace std;

    bool cmp1(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }

    bool cmp2(pair<int, int>& a, pair<int, int>& b){
        if(a.second == b.second)    return a.first < b.first;
        return a.second > b.second;
    }

    vector<int> frequencySort(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        vector<pair<int,int>> v;

        for (auto& it : freq) {
           v.push_back(it);
        }

        sort(v.begin(), v.end(), cmp1);
        sort(v.begin(), v.end(), cmp2);

        for (auto& it : v) {
            for(int i=0;i<it.second;i++){
                res.push_back(it.first);
            }
        }

        return res;
    }

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> nums;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        nums.push_back(x);
	    }        
	    vector<int> res = frequencySort(nums);
	    for(int i=0;i<n;i++)        cout<<res[i]<<" ";
	    cout<<endl;
	}
	return 0;
}