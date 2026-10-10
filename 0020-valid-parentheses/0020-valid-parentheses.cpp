#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {

            // Push opening brackets
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            }
            else {
                // No opening bracket available to match
                if (st.empty()) {
                    return false;
                }

                char c = st.top();

                // Check whether brackets match
                if ((s[i] == ')' && c == '(') ||
                    (s[i] == ']' && c == '[') ||
                    (s[i] == '}' && c == '{')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }

        // Valid only if no unmatched brackets remain
        return st.empty();
    }
};
