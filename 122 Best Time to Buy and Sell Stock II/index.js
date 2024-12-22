const prices = [7, 1, 5, 3, 6, 4];

function maxProfit(prices) {
    let min = prices[0];
    let maxProfit = 0;
    let totalProfit = 0;
    for (let i = 1; i < prices.length; i++) {
        let currentProfit = prices[i] - min;
        if (currentProfit > maxProfit) {
            maxProfit = currentProfit
        } else {
            min = prices[i];
            totalProfit += maxProfit;
            maxProfit = 0;
        }
    }
    return maxProfit + totalProfit;
}