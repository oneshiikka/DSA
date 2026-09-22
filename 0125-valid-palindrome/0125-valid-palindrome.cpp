class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                ans += tolower(s[i]);
            }
        }
        
        int i = 0;
        while (i < ans.length() / 2) {
            if (ans[i] != ans[ans.length() - i - 1])
                return false;
            i++;
        }
        return true;

        
    }
};