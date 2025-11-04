class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = (int)s.size() - 1;
        
        while (left < right) {
            // move left forward to next alphanumeric
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // move right backward to previous alphanumeric
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            // now compare lower-case versions
            if (left < right) {
                if (tolower(s[left]) != tolower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
        }
        
        return true;
    }
};
