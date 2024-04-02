class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // The brute force with O(N2) TC and So time limit exceeded
        // int maxi = 0;
        // int n = prices.size();
        // for(int i = 0; i < n; i++){
        //     for(int j = i + 1; j < n; j++){
        //         if(prices[j] > prices[i]) 
        //         maxi = max(prices[j] - prices[i], maxi);
        //     }
        // }
        // return maxi;

        // The optimal way:
        /* We will linearly travel the array. 
        We can maintain a minimum from the start of the array and compare it
        with every element of the array, if it is greater than the minimum then
        take the difference and maintain it in max, otherwise update the minimum. */
        int maxi = 0;
        int n = prices.size();
        int minPrice = INT_MAX;

        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxi = max(maxi, prices[i] - minPrice);
        }
    
        return maxi; 
    }
};