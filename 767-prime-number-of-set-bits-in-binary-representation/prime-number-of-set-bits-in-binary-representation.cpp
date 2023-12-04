class Solution {
public:
    int countPrimeSetBits(int left, int right) {

        int count = 0;
        for (int num = left; num <= right; ++num) {
            int setBitCount = countSetBits(num);
            if (isPrime(setBitCount)) {
                ++count;
            }
        }
        return count;
    }

private:
    int countSetBits(int num) {
        int count = 0;
        while (num > 0) {
            count += (num & 1);
            num >>= 1;
        }
        return count;
    }

    bool isPrime(int num) {
        if (num < 2) {
            return false;
        }
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
    
};