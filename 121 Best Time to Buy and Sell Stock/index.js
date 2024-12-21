let prices = [2,1,2,1,0,1,2];

function maxProfit(prices) {
    let min = prices.at(0);
    let maxProfit = 0;
    for(let i = 1; i < prices.length; i++){
        if(prices.at(i) - min > maxProfit) maxProfit = (prices.at(i) - min);
        if(prices.at(i) < min) min = prices.at(i);
    }
    return maxProfit;
}