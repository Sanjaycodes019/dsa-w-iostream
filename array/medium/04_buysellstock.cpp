// 💰 Leetcode 121 - Best Time to Buy and Sell Stock
// Given an array 'prices' where prices[i] is the price of a stock on the ith day,
// find the maximum profit you can achieve from one transaction (buy one and sell one share of the stock).
// If you cannot achieve any profit, return 0.

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int mini = prices[0];
    int maxProfit = 0;
    int n = prices.size();

    for(int i = 0; i < n; i++) {
        int cost = prices[i] - mini;  // cost of the day
        maxProfit = max(maxProfit, cost); // maximum profit of that day
        mini = min(mini, prices[i]); // update the minimum
    }
    return maxProfit;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    cout << maxProfit(prices) << endl;
    return 0;
}
