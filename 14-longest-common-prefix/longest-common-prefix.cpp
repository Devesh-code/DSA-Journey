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

/* Python3 solution
def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        for i in range(len(strs[0])):
            for s in strs:
                if i == len(s) or s[i] != strs[0][i]:
                    return res
            res += strs[0][i]
        return res 
*/