class Solution {
public:
    int countCommas(int n) {
        if(n <= 999) return 0;
        if(n<=999999) {
            return n-999;
        }
        return 0;
    }
};