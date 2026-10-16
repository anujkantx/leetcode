class Solution {
public:
    void subset_fn(vector<vector<int>>& ans,
                   vector<int>& temp,
                   vector<int>& nums,
                   int i) {

        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Choice 1: Not Pick
        subset_fn(ans, temp, nums, i + 1);

        // Choice 2: Pick
        temp.push_back(nums[i]);

        subset_fn(ans, temp, nums, i + 1);

        // Backtrack: Undo the choice
        temp.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;

        subset_fn(ans, temp, nums, 0);

        return ans;
    }
};