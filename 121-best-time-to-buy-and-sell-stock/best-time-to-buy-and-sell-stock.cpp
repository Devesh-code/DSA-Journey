class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxP = 0; // Initialize the maximum profit as 0.

    // Initialize two pointers, 'l' and 'r', both initially at index 0.
    int l = 0;
    int r = 0;

    // Loop while the 'r' pointer is less than the length of the 'prices' vector.
    while (r < prices.size()) {
        // Check if the price at 'l' is less than the price at 'r', indicating a potential profit.
        if (prices[l] < prices[r]) {
            // Calculate the profit by selling at the price 'r' and buying at the price 'l'.
            int profit = prices[r] - prices[l];

            // Update 'maxP' to be the maximum of its current value and the calculated profit.
            maxP = std::max(maxP, profit);
        } else {
            // If the price at 'l' is not less than the price at 'r', move the 'l' pointer to the 'r' position.
            l = r;
        }

        // Move the 'r' pointer to the next position.
        r++;
    }

    // Return the maximum profit found.
    return maxP;  
    }
};