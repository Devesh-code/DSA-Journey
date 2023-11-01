class Solution {
public:
    bool isPowerOfThree(int n) {
           if (n <= 0) {
            return false; // Numbers less than or equal to 0 are not powers of three.
        }
        
        double result = log10(n) / log10(3);
        
        return result - int(result) == 0;
    }
};