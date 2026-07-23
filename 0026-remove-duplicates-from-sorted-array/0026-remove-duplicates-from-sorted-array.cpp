class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        for(int i=0; i<n-1; i++){
            if (nums[i]==nums[i+1]){
                continue;
            } else{
                k++;
                nums[k]=nums[i+1];
            }
        }
        return k+1;
    }
};