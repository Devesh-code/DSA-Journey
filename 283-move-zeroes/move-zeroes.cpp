class Solution {
public:
  void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    // Brute force: 
    // By using a temp vector to store all the none zero elements 

    // Step1: coping all the nonzero elements to temp
    vector<int>temp;
    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            temp.push_back(nums[i]);
        }
    }
    // Step2: cpoing back to the original vector
    int nz= temp.size();
    for(int i = 0; i < nz; i++){
        nums[i] = temp[i];
    }
    // Step3: Making all left elements zero
    for(int i = nz; i < n; i++){
        nums[i] = 0;
    }

    // Optimal approach: Using two pointers 

    
    // int l = 0; 
    // for (int r = 1; r < n; r++) { // checking elements at every iteration if it is zero them swap 
    //   if (nums[r] != 0) {
    //     if (l != r) {
    //       swap(nums[l], nums[r]);
    //     }
    //     ++l;
    //   }
    // }
  }
};
