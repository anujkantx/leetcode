class Solution {
public:
    void subset_fn(vector<vector<int>>& ans, vector<int> temp, vector<int>& nums, int i){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        subset_fn(ans, temp, nums, i+1);
        temp.push_back(nums[i]);
        subset_fn(ans, temp, nums, i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subset_fn(ans, temp, nums, 0);
        return ans;
        
    }
};