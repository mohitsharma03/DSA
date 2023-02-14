//LCM And GCD
//gfg: https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1

long long findGCD(long long A , long long B){
        if(A%B==0)  return B;
        return findGCD(B,A%B);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long gcd=findGCD(A,B);
        long long lcm=(A*B)/gcd;
        return {lcm,gcd};
    }