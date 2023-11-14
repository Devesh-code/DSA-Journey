class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first_max = LLONG_MIN, second_max = LLONG_MIN, third_max = LLONG_MIN;

        for (int num : nums) {
            if (num > first_max) {
                third_max = second_max;
                second_max = first_max;
                first_max = num;
            } else if (num > second_max && num < first_max) {
                third_max = second_max;
                second_max = num;
            } else if (num > third_max && num < second_max) {
                third_max = num;
            }
        }

        return (third_max == LLONG_MIN) ? first_max : third_max;
    }
};