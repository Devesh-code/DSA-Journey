class Solution {
public:
    bool isUgly(int n) {
          if (n <= 0) {
            return false;
        }

        while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }

        return n == 1;
    }
};
/*
bool isUgly(int n) { ... }: This is a member function of the Solution class. It takes an integer n as input and returns a boolean (true or false) indicating whether n is an ugly number. The function is defined as follows:

if (n <= 0) { return false; }: If n is less than or equal to 0, it immediately returns false because numbers less than or equal to 0 are not considered ugly.

The code then uses a series of while loops to repeatedly divide n by 2, 3, and 5 as long as n is divisible by these numbers:

while (n % 2 == 0) { n /= 2; }: If n is divisible by 2, it divides n by 2 and repeats the process until n is no longer divisible by 2.

while (n % 3 == 0) { n /= 3; }: Similar to the previous loop, but for 3.

while (n % 5 == 0) { n /= 5; }: Similar to the previous loops, but for 5.

After these loops, if n becomes 1, it means that n is an ugly number because it's been reduced to 1 through repeated divisions by 2, 3, and 5. In that case, the function returns true.

If n is not 1, the function returns false because it means that n still has other factors besides 2, 3, and 5.
*/