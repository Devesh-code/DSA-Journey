class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
           // Preprocess the paragraph
        for (auto& c : paragraph)
            c = ispunct(c) ? ' ' : tolower(c);

        std::string str, res;
        std::unordered_map<std::string, int> freq;
        std::unordered_set<std::string> b(banned.begin(), banned.end());

        auto it = paragraph.begin();
        while (it != paragraph.end()) {
            // Find the beginning of the next word
            while (it != paragraph.end() && isspace(*it))
                ++it;

            // Find the end of the current word
            auto word_end = it;
            while (word_end != paragraph.end() && !isspace(*word_end))
                ++word_end;

            // Extract the current word
            str.assign(it, word_end);

            // Move the iterator to the next word
            it = word_end;

            // Check if the word is not banned and update frequencies
            if (b.count(str) == 0 && freq[res] < ++freq[str])
                res = str;
        }

        return res;
    }
};