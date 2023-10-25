#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int l = 0;
    for (int r = 1; r < nums.size(); r++) {
        if (nums[r] != nums[l]) {
            l++;
            nums[l] = nums[r];
        }
    }

    return l + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int newSize = removeDuplicates(nums);

    cout << "New array with duplicates removed: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
