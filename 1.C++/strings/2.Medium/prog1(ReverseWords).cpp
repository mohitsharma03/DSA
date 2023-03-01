//Reverse Words in a String

//leetcode:https://leetcode.com/problems/reverse-words-in-a-string/
//gfg; https://bit.ly/3SXyWB4

    string reverseWords(string S) {
        int start=0;int end=S.size()-1;
        //remove leading and trailing zeros:
        while(S[start]==' ')    start++;
        while(S[end]==' ')     end--;

        string result = "";string word="";//empt strings

        for(int i=start;i<=end;i++){
            if(i==end){//when reached end then no need to insert space
                word += S[i];
                result = word + result;//insert word at beginning of string
            }
            else if(S[i]!=' '){
                word += S[i];
            }
            else if(S[i]==' ' && S[i-1]!=' '){
                result = ' ' + word + result ;//insert word at beginning of string 
                word="";
            }
        }
        return result;
    }