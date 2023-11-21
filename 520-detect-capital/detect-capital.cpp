class Solution {
public:
    bool detectCapitalUse(string word) {
        int count_caps = 0;

    for (char ch : word) {
        if (isupper(ch)) {
            count_caps++;
        }
    }

    return (count_caps == word.length() || count_caps == 0 || (count_caps == 1 && isupper(word[0])));
    }
};