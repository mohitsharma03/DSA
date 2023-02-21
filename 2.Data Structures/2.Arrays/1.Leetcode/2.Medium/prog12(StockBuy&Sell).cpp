//Best Time to Buy and Sell Stock II

//leetcode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
//gfg: https://bit.ly/3Qrx6H9

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if (n == 1) return 0;
        int i = 0;int maxProfit=0;
        while (i < n - 1) {
            while ((i < n - 1) && (prices[i + 1] <= prices[i]))   i++;
            if (i == n - 1) break;
            int buy = i++;
            while ((i < n) && (prices[i] >= prices[i - 1]))   i++;
            int sell = i - 1;
            maxProfit += (prices[sell]-prices[buy]);
        }
        return maxProfit;
    }

//ref: https://www.geeksforgeeks.org/stock-buy-sell/