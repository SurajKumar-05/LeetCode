class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;           
        int left = 1;
        int right = x / 2;             
        int result = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long sq = (long long)mid * mid;
            if (sq == x) {
                return mid;
            } else if (sq < x) {
                result = mid;          
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return result;
    }
};