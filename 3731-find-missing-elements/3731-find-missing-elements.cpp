class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int j = 0;
        vector<int> ans;
        for(int i=nums[0]; i<nums[n-1]; i++){
            if(nums[j]==i){
                j++;
            }else{
                ans.push_back(i);
            }
        }
        return ans;
    }
};