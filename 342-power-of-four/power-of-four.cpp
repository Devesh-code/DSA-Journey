class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0) {
            return false; // Numbers less than or equal to 0 are not powers of three.
        }
        
        double result = log10(n) / log10(4);
        
        return result - int(result) == 0;
    }
};