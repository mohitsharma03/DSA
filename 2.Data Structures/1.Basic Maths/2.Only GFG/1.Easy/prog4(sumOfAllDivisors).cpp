//Sum of all divisors from 1 to n
//gfg: https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

long long sumOfDivisors(int n)
    {
        long long sum=0;
        for(int i=1;i<=n;i++){
            long long freq = (n/i);//it stores the number of times divisor 'i' occurs in 'n'
            sum +=  freq*i;
        }
        return sum;
    }

//Explanation:
/*For a given number n, every number from 1 to n contributes its presence up to the 
highest multiple less than n. For instance, 
Let n = 6,
=> F(1) + F(2) + F(3) + F(4) + F(5) + F(6)
=> 1 will occurs 6 times in F(1), F(2),
   F(3), F(4), F(5) and F(6)
=> 2 will occurs 3 times in F(2), F(4) and
   F(6)
=> 3 will occur 2 times in F(3) and F(6)
=> 4 will occur 1 times in F(4)
=> 5 will occur 1 times in F(5)
=> 6 will occur 1 times in F(6)
*/