//Convert Integer to Roman
//leetcode: https://leetcode.com/problems/integer-to-roman/description/
//gfg: https://practice.geeksforgeeks.org/problems/convert-to-roman-no/1

    string intToRoman(int number) {
        int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12; string res="";
        while(number>0){
            int div = number/num[i];
            number = number%num[i];
            while(div--)    res = res + sym[i];
            i--;
        }
        return res;
    }

//ref: https://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/