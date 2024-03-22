class Solution {
public:
   int singleNumber(vector<int>& nums) {
  // The Brute Force (modified):
  for (int i = 0; i < nums.size(); i++) {
    int nm = nums[i];
    int cnt = 0;
    for (int j = 0; j < nums.size(); j++) {
      if (nums[j] == nm) { // Check for non-self match
        cnt++;
      }
    }
    if (cnt == 1) return nm;  // Return the single number if found
  }
  // No single number found (all elements appear twice)
  return -1;
}

};