class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    unordered_set<char> row2{'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    unordered_set<char> row3{'z', 'x', 'c', 'v', 'b', 'n', 'm'};

    vector<string> result;

    for (const string& word : words) {
        string lowercaseWord = word;

        // Convert the word to lowercase
        transform(lowercaseWord.begin(), lowercaseWord.end(), lowercaseWord.begin(), ::tolower);

        // Check if all characters are in the same row
        bool inRow1 = all_of(lowercaseWord.begin(), lowercaseWord.end(), [&row1](char c) { return row1.count(c); });
        bool inRow2 = all_of(lowercaseWord.begin(), lowercaseWord.end(), [&row2](char c) { return row2.count(c); });
        bool inRow3 = all_of(lowercaseWord.begin(), lowercaseWord.end(), [&row3](char c) { return row3.count(c); });

        if (inRow1 || inRow2 || inRow3) {
            result.push_back(word);
        }
    }

    return result;
    }
};