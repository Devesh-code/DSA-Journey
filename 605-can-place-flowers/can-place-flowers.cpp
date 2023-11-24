class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int empty = flowerbed[0] == 0 ? 1 : 0;  // Initialize empty counter

    for (int f : flowerbed) {
        if (f) {
            // If a flower is found, calculate the number of flowers that can be placed in the empty spaces
            n -= (empty - 1) / 2;  // Integer division, round toward zero
            empty = 0;  // Reset empty counter
        } else {
            // If an empty plot is found, increment the empty counter
            empty++;
        }
    }

    // After the loop, calculate the remaining flowers that can be placed in the last empty spaces
    n -= empty / 2;

    // Return true if the remaining flowers can be placed or false otherwise
    return n <= 0;
    }
};