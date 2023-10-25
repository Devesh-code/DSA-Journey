#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;  // Target found at index mid.
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return low;  // Target not found; return the index where it should be inserted.
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target1 = 5;
    int target2 = 2;
    int target3 = 7;

    int result1 = searchInsert(nums, target1);
    int result2 = searchInsert(nums, target2);
    int result3 = searchInsert(nums, target3);

    cout << "Insert position for target 5: " << result1 << endl;
    cout << "Insert position for target 2: " << result2 << endl;
    cout << "Insert position for target 7: " << result3 << endl;

    return 0;
}
