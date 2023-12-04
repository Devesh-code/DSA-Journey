class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
         // Parse licensePlate
        unordered_map<char, int> charCount;
        for (char c : licensePlate) {
            if (isalpha(c)) {
                charCount[tolower(c)]++;
            }
        }

        string result;
        int minLength = INT_MAX;

        // Check each word
        for (const string& word : words) {
            if (isCompletingWord(word, charCount) && word.length() < minLength) {
                result = word;
                minLength = word.length();
            }
        }

        return result;
    }

private:
    bool isCompletingWord(const string& word, const unordered_map<char, int>& charCount) {
        unordered_map<char, int> wordCount;

        for (char c : word) {
            wordCount[c]++;
        }

        for (const auto& entry : charCount) {
            char c = entry.first;
            int count = entry.second;

            if (wordCount[c] < count) {
                return false;
            }
        }

        return true;
    }
};