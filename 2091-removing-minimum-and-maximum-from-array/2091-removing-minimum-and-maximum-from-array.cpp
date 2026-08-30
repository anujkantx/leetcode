class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maxIdx = 0;
        int minIdx = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[maxIdx]) {
                maxIdx = i;
            }

            if (nums[i] < nums[minIdx]) {
                minIdx = i;
            }
        }

        int left = max(maxIdx, minIdx) + 1;
        int right = max(n - maxIdx, n - minIdx);
        int both = min(maxIdx, minIdx) + 1 + n - max(maxIdx, minIdx);

        return min(min(left, right), both);
    }
};