class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> num_counts;
    int result = 0;

    // Count occurrences of each number
    for (int num : nums) {
        num_counts[num]++;
    }

    // Check for harmonious subsequence
    for (const auto& entry : num_counts) {
        int num = entry.first;
        if (num_counts.find(num + 1) != num_counts.end()) {
            result = max(result, entry.second + num_counts.at(num + 1));
        }
    }

    return result;
    }
};