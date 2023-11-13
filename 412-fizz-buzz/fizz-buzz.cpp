class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> numstr;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 && i % 5 == 0) {
                numstr.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                numstr.push_back("Fizz");
            } else if (i % 5 == 0) {
                numstr.push_back("Buzz");
            } else {
                numstr.push_back(std::to_string(i));
            }
        }

        return numstr;
    }
};