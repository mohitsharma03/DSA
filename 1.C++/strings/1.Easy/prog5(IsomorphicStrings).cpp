//Isomorphic Strings
//leetcode: https://leetcode.com/problems/isomorphic-strings/
//gfg: https://bit.ly/3QwynwI

    bool isIsomorphic(string word, string pattern) {
        if(word.size()!=pattern.size()){
            return false;
        }
        char hashMapPat[1000]={0};//index=pattern character, value=word character
        char hashMapWord[1000]={0};//index=word charac, value=pattern character
        for(int i=0;i<word.size();i++){
            int indPat=pattern[i];
            int indWord=word[i];
            if(hashMapPat[indPat]==0 && hashMapWord[indWord]==0){
                hashMapPat[indPat] = word[i]; 
                hashMapWord[indWord] = pattern[i];
            }
            else if(hashMapPat[indPat] != word[i] || hashMapWord[indWord] != pattern[i]){
                return false;
            }
        }
        return true;
    }