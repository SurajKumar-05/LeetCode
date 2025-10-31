class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;                        
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return quickPow(x, N);
    }

private:
    double quickPow(double x, long long N) {
        double result = 1.0;
        double current_product = x;

        while (N > 0) {
            if (N & 1) {
                result = result * current_product;
            }
            current_product = current_product * current_product;
            N >>= 1;
        }
        return result;
    }
};
