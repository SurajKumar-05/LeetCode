class Solution {
public:
    bool check(vector<int>& nums) {
     
     int drops = 0;
     for(int i=0;i<nums.size();i++)
     {
        int next=(i+1) % nums.size();
        if(nums[i]>nums[next])
        {
            drops++;
            if(drops>1)
            return false;
        }
     }
     return true;
    }
};