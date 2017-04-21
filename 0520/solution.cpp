class Solution {
public:
    bool isLower(string::iterator& it, const string::iterator& end) {
        while (it < end) {
            if (!(*it <= 'z' && *it >= 'a')) return false;
            it++;
        }
        return true;
    }
    bool isUpper(string::iterator& it, const string::iterator& end) {
        while (it < end) {
            if (!(*it <= 'Z' && *it >= 'A')) return false;
            it++;
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        if (word.length() == 1) return true;
        auto it = word.begin();
        if (*it >= 'a' && *it <= 'z') return isLower(it, word.end());
        it++;
        if (*it >= 'A' && *it <= 'Z') {
            return isUpper(it, word.end());
        }
        return isLower(it, word.end());
    }
};
