//Longest Palindromic Substring(w/o DP)
//leetcode: https://leetcode.com/problems/longest-palindromic-substring/description/
//gfg: https://bit.ly/3CeQ27D

//ref: https://www.geeksforgeeks.org/longest-palindromic-substring-using-dynamic-programming-2/

//leetcode soln:
class Solution {
public:
    int maxLength;
    string res;
    void cSubUtil(string& s, int l, int r){
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            l--;
            r++;
        }
        if (r - l - 1 >= maxLength) {
            res = s.substr(l + 1, r - l - 1);
            maxLength = r - l - 1;
        }
        return;
    }
    string longestPalindrome(string str) {
        res = "";
        maxLength = 1;
        for (int i = 0; i < str.length(); i++) {
            cSubUtil(str, i, i);
            cSubUtil(str, i, i + 1);
        }
        return res;
    }
};

//gfg soln:
class Solution {
  public:
    int maxLength;
    string res;
    void cSubUtil(string& s, int l, int r){
        while (l >= 0 && r < s.length() && s[l] == s[r]) {
            l--;
            r++;
        }
        if (r - l - 1 >= maxLength) {
            res = s.substr(l + 1, r - l - 1);
            maxLength = r - l - 1;
        }
        return;
    }
    string longestPalin (string str) {
        res = "";
        maxLength = 1;
        for (int i = str.length()-1; i>=0; i--) {//this is diffrnt in gfg soln
            cSubUtil(str, i, i);
            cSubUtil(str, i, i - 1);//this is diffrnt in gfg soln
        }
        return res;
    }
};