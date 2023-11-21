class Solution {
public:
    string reverseStr(string s, int k) {
         int n = s.length();

    for (int i = 0; i < n; i += 2 * k) {
        int start = i;
        int end = min(i + k - 1, n - 1);

        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }

    return s;
    }
};
/*    
    This code takes a string `s` as input and performs reverse grouping of characters in segments of size `k`. 
    Here's a step-by-step breakdown of what the code does:
    1. `int n = s.length();` - Get the length of the input string `s` and store it in the variable `n`.
    2. `for (int i = 0; i < n; i += 2 * k)` - This loop iterates over the string `s` in increments of `2 * k`. This means that it will process segments of characters with size `k` and skip the next `k` characters.
    3. `int start = i;` - Set the start index of the current segment as `i`.
    4. `int end = min(i + k - 1, n - 1);` - Calculate the end index of the current segment. The `min()` function ensures that if the calculated end index exceeds the length of the string `s`, it is adjusted to the last index of the string.
    5. `while (start < end)` - This loop reverses the characters within the current segment. It continues until `start` becomes greater than or equal to `end`.
    6. `swap(s[start], s[end]);` - Performs the swapping of characters at indices `start` and `end` in the string `s`.
    7. `start++;` - Increment the `start` index by one.
    8. `end--;` - Decrease the `end` index by one.
    9. `return s;` - Finally, the modified string `s` is returned as the output.
    In summary, this code takes a string `s` and performs reverse grouping of characters in segments of size `k`. It iterates over the string, swaps the characters within each segment, and returns the resulting modified string.*/