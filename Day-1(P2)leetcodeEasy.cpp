#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int res = 0;
        for (int n : nums) {
            res = res ^ n;
        }
        return res;
    }
};// Single number problem