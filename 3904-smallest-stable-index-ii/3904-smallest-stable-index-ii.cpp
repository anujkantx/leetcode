class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> minn(n);
        int g_min = INT_MAX;
        int g_max = INT_MIN;

        for(int j=n-1; j>=0; j--){
            minn[j] = min(nums[j], g_min );
            g_min = minn[j];
        } 

        for(int i=0; i<n; i++){
            g_max = max(g_max, nums[i]);
            int ins = g_max - minn[i];
            if(ins<=k) return i;
        }
        return -1;       
    }
};