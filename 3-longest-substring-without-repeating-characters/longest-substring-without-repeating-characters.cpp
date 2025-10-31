class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, -1);
        int maxLen = 0;
        int start = 0;      
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (lastSeen[c] >= start) {
                
                start = lastSeen[c] + 1;
            }
            maxLen = max(maxLen, i - start + 1);
            lastSeen[c] = i;
        }
        return maxLen;
    }
};
