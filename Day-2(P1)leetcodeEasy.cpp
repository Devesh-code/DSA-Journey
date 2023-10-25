#include <bits/stdc++.h>
using namespace std;

// vector<int> twoSum(vector<int>& nums, int target)
// {
    // int n = nums.size();
    // for (int i = 0; i < n - 1; i++) {
        // for (int j = i + 1; j < n; j++) {
            // if (nums[i] + nums[j] == target) {
                // return {i, j};
            // }
        // }
    // }
    // return {}; // Return an empty vector if no solution is found.
// }
// 
// int main() {
    // vector<int> nums = {2, 7, 11, 15};
    // int target = 9;
// 
    // vector<int> result = twoSum(nums, target);
// 
    // if (!result.empty()) {
        // cout << "Indices of the two numbers that add up to the target: " << result[0] << ", " << result[1] << endl;
    // } else {
        // cout << "No solution found." << endl;
    // }
// 
    // return 0;
// }
// 
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen; // Map to store seen values and their indices

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int complement = target - num;

        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }

        seen[num] = i;
    }

    return {}; // Return an empty vector if no solution is found.
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices of the two numbers that add up to the target: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
