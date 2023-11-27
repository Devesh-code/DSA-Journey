class Solution {
public:
    bool hasAlternatingBits(int n) {
          int prevBit = n % 2;
        n /= 2;

        while (n > 0) {
            int currentBit = n % 2;
            
            if (currentBit == prevBit) {
                return false; // If adjacent bits are the same, return false
            }

            prevBit = currentBit;
            n /= 2;
        }

        return true;
    }
};