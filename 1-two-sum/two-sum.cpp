class Solution {
public:
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
return {};// Return an empty vector if no solution is found.
  
    }
};