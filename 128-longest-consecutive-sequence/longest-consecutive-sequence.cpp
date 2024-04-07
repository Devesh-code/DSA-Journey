class Solution {
public:
    bool linearSearch(vector<int>&arr, int num) {
    int n = arr.size(); //size of array
    for (int i = 0; i < n; i++) {
        if (arr[i] == num)
            return true;
    }
    return false;
    }
    int longestConsecutive(vector<int>& nums) {

        // // The Brute Force: 
        // int n = nums.size(); //size of array
        // int longest = 1;
        // //pick a element and search for its
        // //consecutive numbers:
        // for (int i = 0; i < n; i++) {
        //     int x = nums[i];
        //     int cnt = 1;
        //     //search for consecutive numbers
        //     //using linear search:
        //     while (linearSearch(nums, x + 1) == true) {
        //         x += 1;
        //         cnt += 1;
        //     }

        //     longest = max(longest, cnt);
        // }
        // return longest; // Total TC = O(N) * O(N) and SC = O(1)

        // // The better Way: sort the array and then 
        // int n = nums.size();
        // if (n == 0) return 0;

        // //sort the array:
        // sort(nums.begin(), nums.end());
        // int lastSmaller = INT_MIN;
        // int cnt = 0;
        // int longest = 1;

        // //find longest sequence:
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] - 1 == lastSmaller) {
        //         //a[i] is the next element of the
        //         //current sequence.
        //         cnt += 1;
        //         lastSmaller = nums[i];
        //     }
        //     else if (nums[i] != lastSmaller) {
        //         cnt = 1;
        //         lastSmaller = nums[i];
        //     }
        //     longest = max(longest, cnt);
        // }
        // return longest;// TC = O(N)

        // The optimal approach by using unordered set

        int n = nums.size();
        if (n == 0) return 0;

        int longest = 1;
        unordered_set<int> st;
        //put all the array elements into set:
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        //Find the longest sequence:
        for (auto it : st) {
            //if 'it' is a starting number:
            if (st.find(it - 1) == st.end()) {
            //find consecutive numbers:
                int cnt = 1;
                int x = it;
                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest; // TC = O(3N) and sc = O(N)

    }
};