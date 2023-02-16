//Print GFG N times Without Loop
//gfg: https://bit.ly/3y2BiWz

void printGfg(int N) {
        if(N==0)    return;
        cout<<"GFG"<<" ";
        printGfg(N-1);
    }