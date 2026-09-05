class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> minn(n);
        int g_max = INT_MIN;
        minn[n-1]=nums[n-1];
        for(int j=n-2; j>=0; j--){
            minn[j] = min(nums[j], minn[j+1] );
        } 

        for(int i=0; i<n; i++){
            g_max = max(g_max, nums[i]);
            if(g_max - minn[i]<=k) return i;
        }
        return -1;       
    }
};