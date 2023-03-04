//Maximum Nesting Depth of the Parentheses
//valid parentheses string (denoted VPS)

//leetcode: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/
//gfg: https://bit.ly/3xYlR1F

    int maxDepth(string S) {
        int current_max = 0;
        int max = 0;
        int n = S.length();
        for (int i = 0; i < n; i++){
            if (S[i] == '('){
                current_max++;
                if (current_max > max)  max = current_max;
            }
            else if (S[i] == ')'){
                if (current_max > 0)    current_max--;
                else    return -1;
            }
        }
        if (current_max != 0)   return -1;
        return max;
    }
//ref: https://www.geeksforgeeks.org/find-maximum-depth-nested-parenthesis-string/    