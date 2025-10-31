class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        while (--n) {
            string next = "";
            int i = 0;
            while (i < ans.size()) {
                int count = 1;
                char c = ans[i];
                
                while (i + 1 < ans.size() && ans[i+1] == c) {
                    ++count;
                    ++i;
                }
                next += to_string(count);
                next.push_back(c);
                ++i;
            }
            ans = move(next);
        }
        return ans;
    }
};
