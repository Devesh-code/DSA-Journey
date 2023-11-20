class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) {
        return false;
    }

    // Initialize sum to 1
    int sum = 1;

    // Iterate from 2 to the square root of num
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            sum += i + num / i;
        }
    }

    // Check if num is a perfect number
    return num == sum;
    }
};