# Problem 121: Best Time to Buy and Sell Stock

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

**LeetCode Problem Link**: [Problem URL](https://leetcode.com/problems/best-time-to-buy-and-sell-stock)

---

## Problem Statement

### Description:
- You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day.
- You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
- Return the maximum profit you can achieve from this transaction. 
- If you cannot achieve any profit, return 0.

---

## Approach
### Thought Process:

- **Initial Analysis**: We need to keep track of the current profit on the given day. As long as there's a maximum profit until the last day, make the transaction. 

- **Challenges**: One key challenge was identifying the next potential transaction while tracking the next minimum value.

- **Optimizations**: The solution runs in **O(n)** time complexity, as we only need to traverse the array once. The space complexity is **O(1)** because we only use a few variables to track the minimum price, and the maximum profit for the current transaction.

### Algorithm:

1. **Step 1**: Initialize two variables:
    - `min`: Tracks the minimum price seen so far.
    - `maxProfit`: Tracks the maximum profit for the current transaction.

2. **Step 2**: Iterate through the `prices` array starting from the second element (`i = 1`):
    - Calculate if there's a new maximum profit `currentProfit = prices[i] - min`.
    - If `currentProfit` is greater than `maxProfit`, update `maxProfit`.
    - If the current price is less than the previous one `prices[i] < min`:
        - Update `min` to the current price (`prices[i]`) to start a new potential transaction.

3. **Step 3**: return the obtained `maxProfit`.

### Code Implementation:

```javascript
// Solution in JavaScript
function maxProfit(prices) {
    let min = prices.at(0);
    let maxProfit = 0;
    for(let i = 1; i < prices.length; i++){
        let currentProfit = prices.at(i) - min;
        if(currentProfit > maxProfit) maxProfit = currentProfit;
        if(prices.at(i) < min) min = prices.at(i);
    }
    return maxProfit;
}
