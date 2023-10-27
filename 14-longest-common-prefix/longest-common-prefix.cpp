class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";

        if (strs.empty()) {
            return res;
        }

        for (int i = 0; i < strs[0].length(); i++) {
            for (const std::string& s : strs) {
                if (i == s.length() || s[i] != strs[0][i]) {
                    return res;
                }
            }
            res += strs[0][i];
        }

        return res;
    }
};