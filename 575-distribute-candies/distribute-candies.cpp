class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueCandies(candyType.begin(), candyType.end());

        // Calculate the maximum number of different types of candies Alice can eat
        return min(uniqueCandies.size(), candyType.size() / 2);
    }
};