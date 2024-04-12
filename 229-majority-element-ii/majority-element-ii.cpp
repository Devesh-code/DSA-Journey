class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        // // The Brute force:
        // int n = v.size(); //size of the array
        // vector<int> ls; // list of answers

        // for (int i = 0; i < n; i++) {
        // //selected element is v[i]:
        // // Checking if v[i] is not already
        // // a part of the answer:
        //     if (ls.size() == 0 || ls[0] != v[i]) {
        //         int cnt = 0;
        //         for (int j = 0; j < n; j++) {
        //         // counting the frequency of v[i]
        //             if (v[j] == v[i]) {
        //                 cnt++;
        //             }
        //         }

        //     // check if frquency is greater than n/3:
        //         if (cnt > (n / 3))
        //             ls.push_back(v[i]);
        //     }

        //     if (ls.size() == 2) break;
        // }

        // return ls;



        // // The better way by using Hashing with the TC = O(N) and SC = O(N)
        // int n = nums.size();
        // unordered_map<int, int> hsh;
        // vector<int> ans;
        // // least occurrence of the majority element:
        // int mini = int(n / 3) + 1;
        // for(int i = 0; i < n; i++){
        //     hsh[nums[i]] += 1;

        //     if(hsh[nums[i]] == mini) {
        //     ans.push_back(nums[i]);
        //     }
        //     if (ans.size() == 2) break;
        // }
            
        // return ans; 


        // The optimal way with TC = O(N) and SC = O(1);

        int n = nums.size(); //size of the array

        int cnt1 = 0, cnt2 = 0; // counts
        int el1 = INT_MIN; // element 1
        int el2 = INT_MIN; // element 2

        // applying the Extended Boyer Moore's Voting Algorithm:
        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && el2 != nums[i]) {
                cnt1 = 1;
                el1 = nums[i];
            }
            else if (cnt2 == 0 && el1 != nums[i]) {
                cnt2 = 1;
                el2 = nums[i];
            }
            else if (nums[i] == el1) cnt1++;
            else if (nums[i] == el2) cnt2++;
            else {
                cnt1--, cnt2--;
            }
        }

        vector<int> ans; 

        // Manually check if the stored elements in
        // el1 and el2 are the majority elements:
        cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el1) cnt1++;
           if (nums[i] == el2) cnt2++;
        }

        int mini = int(n / 3) + 1;
        if (cnt1 >= mini) ans.push_back(el1);
        if (cnt2 >= mini) ans.push_back(el2);

    return ans;
    }
};