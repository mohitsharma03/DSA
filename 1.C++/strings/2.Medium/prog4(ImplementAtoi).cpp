//Implement Atoi: String to Integer (atoi)
//leetcode: https://leetcode.com/problems/string-to-integer-atoi/description/
//gfg: https://bit.ly/3QUHBmf

//ref: https://www.geeksforgeeks.org/write-your-own-atoi/

//leetcode:
    int myAtoi(string str) {
        int sign = 1, base = 0, i = 0;
        while (str[i] == ' ')   i++;
        if (str[i] == '-' || str[i] == '+')     sign = 1 - 2 * (str[i++] == '-');
        while (str[i] >= '0' && str[i] <= '9'){
            if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7)){
                if (sign == 1)  return INT_MAX;
                else    return INT_MIN;
            }
            base = 10 * base + (str[i++] - '0');
        }
        return base * sign;
    }

//gfg: 
    int atoi(string str) {
        int sign = 1, base = 0, i = 0;
        while (str[i] == ' ')   i++;
        if (str[i] == '-' || str[i] == '+')     sign = 1 - 2 * (str[i++] == '-');
        while (str[i] >= '0' && str[i] <= '9'){
            if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7)){
                if (sign == 1)  return INT_MAX;
                else    return INT_MIN;
            }
            base = 10 * base + (str[i++] - '0');
        }
        if(i<str.size() && !(str[i] >= '0' && str[i] <= '9'))   return -1;//extra line for gfg soln
        return base * sign;
    }
