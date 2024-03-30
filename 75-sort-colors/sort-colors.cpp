class Solution {
public:
    void sortColors(vector<int>& nums) {
       
       //// Brute force: Just simply sort it 
        //sort(nums.begin(),nums.end());

      
        // The Better way:
        // int cnt0 = 0, cnt1 = 0, cnt2 = 0;

        // for (int i = 0; i < n; i++) {
        //     if (arr[i] == 0) cnt0++;
        //     else if (arr[i] == 1) cnt1++;
        //     else cnt2++;
        // }

        // //Replace the places in the original array:
        // for (int i = 0; i < cnt0; i++) arr[i] = 0; // replacing 0's

        // for (int i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1; // replacing 1's

        // for (int i = cnt0 + cnt1; i < n; i++) arr[i] = 2; // replacing 2's




          // The Optimal way by using Dutch National Flag Algorithm

        // Handle empty or single-element arrays efficiently
        if (nums.size() <= 1) {
            return;
        }

        // Three-way partition (Dutch National Flag Algorithm)
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            switch (nums[mid]) {
                case 0:
                    swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid], nums[high]);
                    high--;
                    break;
            }
        }
    }
};