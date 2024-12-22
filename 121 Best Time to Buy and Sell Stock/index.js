let prices = [2,1,2,1,0,1,2];

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