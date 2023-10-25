class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          unordered_map<int, int> m; 
for (int i = 0; i < nums.size(); i++) {
    int num = nums[i];
    int complement = target - num;
    if (m.find(complement) != m.end()) {
        return {m[complement], i};
    }
    m[num] = i;
}
return {};
  
    }
};