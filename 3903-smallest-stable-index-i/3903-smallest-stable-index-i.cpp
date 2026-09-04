class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int min_num = INT_MAX;
        int max_num = -1;
        int ans = INT_MAX;
        bool flag = false;
        vector<int> minArr(n);

        for(int j=n-1; j>=0; j--){
            minArr[j] = min(min_num, nums[j]);
            min_num = minArr[j];
        }

        for(int i=0; i<n; i++){
            max_num = max(max_num, nums[i]);
            if(max_num - minArr[i]<=k){
                ans = min(ans, i);
                flag = true;
            }
        }

        if(flag){
            return ans;
        }else{
            return -1;
        }
    }
};