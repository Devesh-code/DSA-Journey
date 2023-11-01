// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0;
        int right = n;
        while(left < right){
            int mid = left + (right - left) / 2;
            if(isBadVersion(mid)){
                right = mid;
            }
            else{
                left = mid + 1;
            }
            if (left == right && isBadVersion(left)){
                return left;
            }
        }
        return -1;
    }
};
/*
Here's the explanation of the code and its flow:

int firstBadVersion(int n): This is the main function. It takes an integer n as input, which represents the range of versions from 1 to n. The function aims to find the first "bad" version within this range and return its number.

int left = 0; and int right = n;: These two variables are used to establish a range within which to search for the first bad version. left is initialized to the beginning of the range (0), and right is initialized to the end of the range (n).

while (left < right) { ... }: This is a while loop that continues as long as the left end of the range is less than the right end. This loop will narrow down the range until it identifies the first bad version.

int mid = left + (right - left) / 2;: This line calculates the middle version within the current range. It avoids potential integer overflow by using this form of calculation. mid is a candidate for the first bad version.

if (isBadVersion(mid)) { ... }: It calls the external API function isBadVersion with the version number mid. If this version is identified as "bad," it means that the first bad version might be to the left of or including mid. So, right is set to mid, narrowing the search range to the left side.

else { ... }: If isBadVersion(mid) returns false, it means that the first bad version must be to the right of mid. So, left is set to mid + 1, narrowing the search range to the right side.

if (left == right && isBadVersion(left)) { ... }: This condition checks if the left and right pointers have converged to a single version and if this version is "bad." If both conditions are met, it means that the first bad version has been found, so it returns left as the answer.

If none of the above conditions are met within the loop, the loop will continue to narrow down the search range. Once the loop completes, if a bad version is found, it returns the version number. If not, it returns -1 to indicate that no bad version was found within the given range.

The code performs a binary search to efficiently locate the first bad version within the specified range by repeatedly dividing the search interval in half. This is a common strategy for finding a specific item in a sorted list efficiently.
*/