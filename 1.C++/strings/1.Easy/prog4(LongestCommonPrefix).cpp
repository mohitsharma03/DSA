//Longest Common Prefix
//leetcode: https://leetcode.com/problems/longest-common-prefix/description/
//gfg: https://bit.ly/3QKCyVu

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minlen = INT_MAX; int minInd;
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<minlen){
                minlen = strs[i].size();
                minInd = i;
            }
        }
        string tmp=strs[minInd];
        for(int i=0;i<strs.size();i++){
            if(i==minInd)   continue;
            string sub = strs[i].substr(0,tmp.size());
            while(tmp.size()>0){
                if(tmp.compare(sub)==0)     break;
                else{
                    tmp = tmp.substr(0,tmp.size()-1);
                    sub = strs[i].substr(0,tmp.size());
                }    
            }
            if(tmp.size()==0)   return "";
        }
        return tmp;
    }
};