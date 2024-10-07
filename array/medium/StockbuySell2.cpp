#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    int profit = 0;
    for (int i = 1; i < prices.size(); ++i) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1]; // Buy on the previous day and sell today
        }
    }
    return profit;
}

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    std::cout << "Maximum profit: " << maxProfit(prices) << std::endl; // Output: Maximum profit: 7
    return 0;
}
