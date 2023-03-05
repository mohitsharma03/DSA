//Convert Roman Number to Integer
//leetcode: https://leetcode.com/problems/roman-to-integer/description/
//gfg: https://bit.ly/3AqBlNv

    int romanToInt(string str) {
        map<char, int> m;
        m.insert({ 'I', 1 });
        m.insert({ 'V', 5 });
        m.insert({ 'X', 10 });
        m.insert({ 'L', 50 });
        m.insert({ 'C', 100 });
        m.insert({ 'D', 500 });
        m.insert({ 'M', 1000 });
        int sum = 0;
        for (int i = 0; i < str.length(); i++){
            if (m[str[i]] < m[str[i + 1]]){
                sum+=m[str[i+1]]-m[str[i]];
                i++;
                continue;
            }
            sum += m[str[i]];
        }
        return sum;
    }
//ref: https://www.geeksforgeeks.org/converting-roman-numerals-decimal-lying-1-3999/    