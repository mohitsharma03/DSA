//Print 1 To N Without Loop
//gfg: https://bit.ly/3K2epHv

void printNos(int N)
    {
        //Your code here
        if(N==0)    return;
        
        printNos(N-1);
        cout<<N<<" ";
    }