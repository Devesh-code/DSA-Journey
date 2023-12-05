class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int count = 0;
        // Iterate through each character in stones
        for (char stone : stones) {
            // Check if the stone is a jewel
            if (jewelSet.count(stone) > 0) {
                count++;
            }
        }
        return count;       
    }
};