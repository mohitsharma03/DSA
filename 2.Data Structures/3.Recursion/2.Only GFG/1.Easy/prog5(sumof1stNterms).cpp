//Sum of first n terms: Calculate the sum of series 1^3 + 2^3 + 3^3 + 4^3 + … till N-th term.
//gfg: https://bit.ly/3C9KZ8G

long long sumOfSeries(long long N) {
        if(N==0)    return 0;
        
        return N*N*N + sumOfSeries(N-1);
    }