//Check if strings are rotations of each other or not
//leetcdode: https://leetcode.com/problems/rotate-string/description/
//gfg: https://bit.ly/3K0HHq5

    //T=O(n),S=O(n)
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())   return false;
        goal = goal + goal;
        return (goal.find(s) != string::npos);
    }

//ref: https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/    