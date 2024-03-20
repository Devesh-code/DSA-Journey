/*
    Given array in range [0, n], return missing
    Ex. nums = [3,0,1] -> 2, nums = [0,1] -> 2

    Use the fact that XOR is its own inverse
    Ex. [0,1,3,4]
    Missing = 4^(0^0)^(1^1)^(2^3)^(3^4)
            = (4^4)^(0^0)^(1^1)^(3^3)^2
            = 0^0^0^0^2 = 2

    Time: O(n)
    Space: O(1)
*/

class Solution {
public:

//     int missingNumber(vector<int>& nums) { // brute force approach and can produce errors
//     int flag = 0;
//     int n = nums.size();
//     for (int i = 1; i <= n; i++) {
//         for (int j = 0; j < n - 1; j++) {
//             if (nums[j] == i) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) return i;
//     }
//     return -1;
// }


    // A bit better approach

    // int missingNumber(vector<int>& nums){
    //     int n = nums.size();
    //     int hash[n+1] = {0};

    //     for(int i = 0; i < n-1; i++){
    //         hash[nums[i]] = 1;
    //     }

    //     for(int j = 1; i <= n; i++){
    //         if(hash[i] == 0) return i;
    //     }
    //     return -1;
    // }


    // Two diffrent optimal approaches sum & Xor

    int missingNumber(vector<int>& nums){
        int n = nums.size();
        int expected_sum = n * (n + 1)/2 ; // 2
        int actual_sum = 0;
        for(int i = 0; i < n; i++){
            actual_sum += nums[i];
        }
        return expected_sum - actual_sum;
    }


    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     int result = n;
    //     for (int i = 0; i < n; i++) {
    //         result ^= i ^ nums[i];
    //     }
    //     return result;
    // }
};
