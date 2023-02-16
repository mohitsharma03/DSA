//Given n, find nth fibonacci number:
//leetcode: https://leetcode.com/problems/fibonacci-number/description/

int fib(int n) {
        if(n<=1)    return n;
        return fib(n-1)+fib(n-2);
    }

//Print first n Fibonacci Numbers
//gfg: https://bit.ly/3QUkkk2

vector<long long> printFibb(int n) //iterative
    {
        vector<long long> v(n);
        v[0]=1;
        if(n==1 )   return v;
        
        v[1]=1;
        if(n==2)    return v;
        
        for(int i=2;i<n;i++){
            v[i] = v[i-1] + v[i-2];
        }   
        return v;
    }