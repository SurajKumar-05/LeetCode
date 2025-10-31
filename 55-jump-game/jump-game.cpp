class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxReach = 0;

        for (int i = 0; i < n; ++i) {
            if (i > maxReach) {
                // we can't even reach index i
                return false;
            }
            maxReach = max(maxReach, i + nums[i]);
            // Optional early exit:
            if (maxReach >= n - 1) {
                return true;
            }
        }

        // If loop finishes, we can reach end
        return true;
    }
};
 