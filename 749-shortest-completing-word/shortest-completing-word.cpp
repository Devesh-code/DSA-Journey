class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
      const int WORD_MAX_LEN = INT_MAX;  // Define WORD_MAX_LEN

        vector<char> letters;
        string returnWord;
        int returnWordLen = WORD_MAX_LEN;

        transform(licensePlate.begin(), licensePlate.end(), licensePlate.begin(), ::tolower);
        
        for (char ch : licensePlate) {
            if (isLetter(ch)) {
                letters.push_back(ch);
            }
        }
        
        for (const string& word : words) {
            if (word.size() < returnWordLen && isCompletingWord(word, letters)) {
                returnWordLen = word.size();
                returnWord = word;
            }
        }

        return returnWord;
    }

private:
    bool isLetter(char ch) {
        return (ch >= 'a' && ch <= 'z');
    }

    bool isCompletingWord(const string& word, const vector<char>& letters) {
        vector<int> letterCount(26, 0);

        for (char ch : word) {
            letterCount[ch - 'a']++;
        }

        for (char ch : letters) {
            if (letterCount[ch - 'a'] == 0) {
                return false;
            }
            letterCount[ch - 'a']--;
        }

        return true;   
    }
};