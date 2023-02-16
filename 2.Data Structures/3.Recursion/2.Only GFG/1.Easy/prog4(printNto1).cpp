//Print N To 1 Without Loop
//gfg: https://bit.ly/3LOkcBn

void printNos(int N) {
        if(N==0)    return;
        
        cout<<N<<" ";
        printNos(N-1);
    }
