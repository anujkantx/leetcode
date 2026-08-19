class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        
        // Find global maximum index
        int maxIndex = 0;
        
        for (int i = 1; i < n; i++) {
            if (height[i] > height[maxIndex]) {
                maxIndex = i;
            }
        }

        int water = 0;

        // Process left side
        int maxLeft = 0;

        for (int i = 0; i < maxIndex; i++) {
            if (height[i] >= maxLeft) {
                maxLeft = height[i];
            } else {
                water += maxLeft - height[i];
            }
        }

        // Process right side
        int maxRight = 0;

        for (int i = n - 1; i > maxIndex; i--) {
            if (height[i] >= maxRight) {
                maxRight = height[i];
            } else {
                water += maxRight - height[i];
            }
        }

        return water;
    }
};