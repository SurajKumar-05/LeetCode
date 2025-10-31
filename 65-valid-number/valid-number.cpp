class Solution {
public:
    bool isNumber(string s) {
        int n = s.size();
      
        int i = 0;
        while (i < n && isspace(s[i])) i++;
        int j = n - 1;
        while (j >= 0 && isspace(s[j])) j--;
        if (i > j) return false;

        bool seenDigit = false;
        bool seenDot = false;
        bool seenExp = false;

        for (int k = i; k <= j; ++k) {
            char c = s[k];
            if (isdigit(c)) {
                seenDigit = true;
            }
            else if (c == '+' || c == '-') {
                
                if (k != i && !(s[k-1] == 'e' || s[k-1] == 'E')) {
                    return false;
                }
            }
            else if (c == '.') {
                if (seenDot || seenExp) {
                    return false;
                }
                seenDot = true;
            }
            else if (c == 'e' || c == 'E') {
                if (seenExp || !seenDigit) {
                    return false;
                }
                seenExp = true;
                seenDigit = false;  
            }
            else {
                return false;
            }
        }
        return seenDigit;
    }
};
