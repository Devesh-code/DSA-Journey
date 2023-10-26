class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
           int n = digits.size();
    std::vector<int> newNumber(n + 1);

    int carry = 1;

    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        newNumber[i + 1] = sum % 10; 
        carry = sum / 10; 
    }

    if (carry) {
        newNumber[0] = carry;
        return newNumber;
    } else {
        return std::vector<int>(newNumber.begin() + 1, newNumber.end());
    }

    }
};