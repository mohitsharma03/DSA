//Palindrome String: Given a string S, check if it is palindrome or no using recursion

    //method1:
    int isPalindrome(string s)
	{
	    if(s.length()==1)   return 1;
	    if(s.length()==2)   return s[0]==s[1];
	    if(s[0]!=s[s.length()-1])   return 0;
	    return isPalindrome(s.substr(1,s.length()-2));
	}

    //method2: 
    /*Recursive soln: but it was getting TLE in gfg
	int ispallin(string s,int i,int j){
        if(i>j)    return 1;
        if(s[i++]==s[j--])   return ispallin(s,i,j);
        return 0;
    }
	
	int isPalindrome(string s)
	{
	    return ispallin(s,0,s.size()-1);
	}
	*/