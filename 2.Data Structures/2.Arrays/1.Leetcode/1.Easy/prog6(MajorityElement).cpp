//Majority Element: element that appears more than N/2 times in the array.

//leetcode: https://leetcode.com/problems/majority-element/
//gfg: https://bit.ly/3SSpeA3

    int majorityElement(vector<int>& a) {
        unordered_map<int,int> map;
        int max=0;int res=-1;int n=a.size();
        for(int i=0;i<n;i++){
            map[a[i]]++;
            int t=map[a[i]];
            if(t>n/2){
                //max=t;
                return a[i];
            }
        }
        return res;
    }

//for more solns: https://www.geeksforgeeks.org/majority-element/
