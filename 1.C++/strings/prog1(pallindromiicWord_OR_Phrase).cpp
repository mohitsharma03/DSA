//Palindrome String:
//gfg; https://bit.ly/3w2G4T5

int isPalindrome(string s)
	{
	    int i=0;int j=s.size()-1;
	    while(i<=j){
	        if(s[i++]!=s[j--])   return 0;    
	    }
        
        return 1;
	}

//Valid Palindrome(pallindromic phrase):
//gfg; https://leetcode.com/problems/valid-palindrome/description/

bool isPalindrome(string s) {//T=O(n),S=O(1)
        int i=0;int j=s.size()-1;
        while(i<j){
            if(!isalnum(s[i]))   i++;//islanum() checks if character is alphanumeric(character or number)
            else if(!isalnum(s[j]))   j--;
            else if(tolower(s[i++])!=tolower(s[j--]))   return false;
        }
        return true;
    }