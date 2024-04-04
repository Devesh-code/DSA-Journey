class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // The brute force: Just seprate all the negitive and positive numbers after that rearrange the array according to the conditions.       
        // int n = nums.size();
        // vector<int> pstv;
        // vector<int> neg;
        // for(int i = 0; i < n; i++){ // O(N)
        //     if(nums[i] > 0){
        //         pstv.push_back(nums[i]);
        //     } else {
        //         neg.push_back(nums[i]);
        //     }
        // } 
        // for(int i = 0; i < n/2; i++){ // O(N/2)
        //     nums[2*i] = pstv[i];
        //     nums[2*i+1] = neg[i];
        // }
        // return nums; // Total TC = O(N) + O(N/2) & SC = O(N)

        // A bit Optimal way by using another array vector and in single iteration
        int n = nums.size();
        vector<int> mod(n,0); 
        int posIndex = 0, negIndex = 1;
        for(int i = 0; i < n; i++){
           // Fill negative elements in odd indices and inc by 2.
            if(nums[i]<0){
                mod[negIndex] = nums[i];
                negIndex+=2;
            }
      
            // Fill positive elements in even indices and inc by 2.
            else{
                mod[posIndex] = nums[i];
                posIndex+=2;
            }
        }
        return mod; // Total TC = O(N) & SC = O(N)
    }   
};