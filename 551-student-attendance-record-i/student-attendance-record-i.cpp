class Solution {
public:
    bool checkRecord(string s) {
       int absentCount = 0;
    int consecutiveLate = 0;

    for (char c : s) {
        if (c == 'A') {
            absentCount++;
            consecutiveLate = 0; // Reset consecutiveLate when absent
        } else if (c == 'L') {
            consecutiveLate++;
        } else {
            consecutiveLate = 0; // Reset consecutiveLate when present
        }

        // Check criteria
        if (absentCount >= 2 || consecutiveLate >= 3) {
            return false;
        }
    }

    return true;
    }
};