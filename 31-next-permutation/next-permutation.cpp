class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /*
        Brute Force: Finding all possible permutations. 

        Approach :

        Step 1: Find all possible permutations of elements present and store them.

        Step 2: Search input from all possible permutations.

        Step 3: Print the next permutation present right after it.
        Don't try to code this approacah because the time complexity for this is O(N! * N)
        So just explain that is also a way to solve it.
        */

        // A somewhat better then brute froce is by using stl function 

      //  next_permutation(nums.begin(), nums.end());

        // The optimal way: Check out notes 

        int n = nums.size(), index = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        for(int i=n-1; i>=index && index != -1; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());

    }
};