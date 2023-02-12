//Reverse Integer:
//gfg: https://practice.geeksforgeeks.org/problems/reverse-digit0316/1
//leetcode: https://leetcode.com/problems/reverse-integer/description/

class Solution {
public:
    int reverse(int x) {
        long long int res=0;
        while(x!=0){
            res = res*10 + (x%10);
            if(res<=INT_MIN || res>=INT_MAX)   return 0;
            x=x/10;
        }
        return res;
    }
};

//Reverse Bits;
//gfg:https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
//leetcode: https://leetcode.com/problems/reverse-bits/description/

//method1:
long long reversedBits(long long num) {
        //unsigned int NO_OF_BITS = sizeof(num) * 8;//General
        unsigned int NO_OF_BITS = 32;
        unsigned int reverse_num = 0;
        for (int i = 0; i < NO_OF_BITS; i++) {
            if ((num & (1 << i)))
                reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
        }
        return reverse_num;
    }

//method2:
long long reversedBits(long long num) {
        //unsigned int count = sizeof(num) * 8 - 1;//General
        unsigned int count = 31;
        unsigned int reverse_num = num;
        num >>= 1;
        while (num) {
            reverse_num <<= 1;
            reverse_num |= num & 1;
            num >>= 1;
            count--;
        }
        reverse_num <<= count;
        return reverse_num;
    }

//Method 3 – Lookup Table: see gfg: https://www.geeksforgeeks.org/reverse-bits-using-lookup-table-in-o1-time/