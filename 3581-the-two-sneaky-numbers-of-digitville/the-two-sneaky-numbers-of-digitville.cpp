class Solution {
public:
    vector<int> getSneakyNumbers(const vector<int>& nums) {
        int n = nums.size() - 2;           
        vector<int> ans;
        vector<int> count(n, 0);

        for (int num : nums) {
            count[num]++;
            if (count[num] == 2) {
                ans.push_back(num);
                if (ans.size() == 2) break;
            }
        }

        return ans;
    }
};
