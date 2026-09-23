class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int n = s.size();
        int startIdx = 0;
        int longest = 0;

        for(int i=0; i<n; i++){
            while(st.count(s[i])){  // if appeared more than once
                st.erase(s[startIdx]);
                startIdx++;
            }
            st.insert(s[i]);
            longest = max(longest, i - startIdx + 1);
        }
    return longest;
    }
};
