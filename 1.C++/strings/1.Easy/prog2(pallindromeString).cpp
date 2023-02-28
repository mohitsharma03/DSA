//Palindrome String: Given a string S, check if it is palindrome or not.
//gfg: https://bit.ly/3w2G4T5

int isPalindrome(string s)
	{
	    int i=0;int j=s.size()-1;
	    while(i<=j){
	        if(s[i++]!=s[j--])   return 0;    
	    }
        
        return 1;
	}