//Anagram
//leetcode: https://leetcode.com/problems/valid-anagram/description/
//gfg: https://bit.ly/3SkMyoX

    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t);
    }

//ref: https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/