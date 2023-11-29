class Solution {
public:
    string toLowerCase(string s) {
        string result;
    
    for (char ch : s) {
        if ('A' <= ch && ch <= 'Z') {
            result += static_cast<char>(ch + 32);
        } else {
            result += ch;
        }
    }
    
    return result;
    }
};