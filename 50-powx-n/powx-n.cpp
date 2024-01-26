class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n<0)
        {
            x = 1/x;
        }
        n = abs(n);
        while (n > 0) {
            if (n % 2 == 1) {
                ans *= x;
            }
            n = n / 2;
            x = x * x;
        }
        return ans;
    }
};