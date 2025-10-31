class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            digits[i] += 1;
            if (digits[i] < 10) {
                
                return digits;
            }
           
            digits[i] = 0;
        }
        
        vector<int> result(n + 1, 0);
        result[0] = 1;
        return result;
    }
};
