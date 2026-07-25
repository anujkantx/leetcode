class Solution {
public:
    int maxProduct(int n) {
        int mx = 0;
        int ans = 0;

        while (n > 0) {
            int digit = n % 10;
            ans = max(ans, mx * digit);
            mx = max(mx, digit);
            n /= 10;
        }

        return ans;
    }
};