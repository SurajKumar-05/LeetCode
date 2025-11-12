class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int insertPos = 0;
        for (int x : nums) {

            if (x != 0) nums[insertPos++] = x;
        }

        
        while (insertPos < nums.size()) nums[insertPos++] = 0;
    }
};
