//Count number of substrings with exactly k distinct characters
//gfg: https://bit.ly/3CfQfYi
//ref: https://www.geeksforgeeks.org/count-number-of-substrings-with-exactly-k-distinct-characters/

//soln frm gfg comments:
class Solution
{
  public:
    long long int atMostK(string &s,int k){
      vector<long long int>freq(26,0);//if we take map then we get TLE
      long long int start =0,count=0,distinct=0;
      
      for(int i=0; i<s.size();i++){
          if(freq[s[i]-'a']==0)     distinct++;
          freq[s[i]-'a']++;
          while(distinct>k){
              freq[s[start]-'a']--;
              if(freq[s[start]-'a']==0)     distinct--;
              start++;
          }
          if(distinct<=k)       count = count+i-start+1;
      }
      return count;
    }
    long long int substrCount (string s, int k) {
    	return atMostK(s,k) -atMostK(s,k-1);
    }
};

/*************************************************************/
//Variation
//leetcode: https://leetcode.com/problems/subarrays-with-k-different-integers/description/
//gfg: https://practice.geeksforgeeks.org/problems/subarrays-with-k-different-integers/1
//ref: https://www.geeksforgeeks.org/count-of-subarrays-having-exactly-k-distinct-elements/

class Solution {
  public:
  long long int atMostK(vector<int> &s,int k){
      vector<long long int>freq(s.size()+1,0);
      long long int start =0,count=0,distinct=0;
      
      for(int i=0; i<s.size();i++){
          if(freq[s[i]]==0)     distinct++;
          freq[s[i]]++;
          while(distinct>k){
              freq[s[start]]--;
              if(freq[s[start]]==0)     distinct--;
              start++;
          }
          if(distinct<=k)       count = count+i-start+1;
      }
      return count;
    }
    int subarrayCount(vector<int> &s, int N, int k) {
        return atMostK(s,k) -atMostK(s,k-1);
    }
};