class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, count = 0;
        
        for (int n : nums) {


            if (n == 1) {

                count++;
                maxCount = max(maxCount, count);

            } 
            
            else {

                count = 0;
            }
        }
        
        return maxCount;
    }
};
