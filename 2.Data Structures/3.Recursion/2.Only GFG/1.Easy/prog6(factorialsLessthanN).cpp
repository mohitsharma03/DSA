//Find all factorial numbers less than or equal to N
//gfg: https://bit.ly/3QugUVo

    vector<long long> res;
    long long fact = 1;
    long long num;
    
    void factorial(long long N){//func2
        fact = fact*N;
        if(fact>num)    return;
        res.push_back(fact);
        factorial(N+1);
    }
    vector<long long> factorialNumbers(long long N){//func1
        num=N;
        factorial(1);
        return res;
    }