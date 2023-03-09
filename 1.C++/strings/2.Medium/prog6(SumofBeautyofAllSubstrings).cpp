//Sum of Beauty of All Substrings
//leetcode: https://leetcode.com/problems/sum-of-beauty-of-all-substrings/description/
//gfg: https://bit.ly/3LRh089

    int beautySum(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            vector<int> freq(26,0);//if we use hashmap then we get TLE
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int mn=INT_MAX;
                int mx=INT_MIN;
                for(int k=0;k<26;k++){
                    if(freq[k]==0){
                        continue;
                    }
                    mn=min(mn,freq[k]);
                    mx=max(mx,freq[k]);
                }
                res+=(mx-mn);
            }
        }
        return res;
    }