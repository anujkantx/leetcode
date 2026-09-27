class Solution {
public:

    int find(vector<int>& nums, int start, int end, int target){
        if(start>end) return -1;

        int mid = start + (end - start)/2;
        if(nums[mid] == target) return mid;
        //left sorted
        if(nums[mid]>=nums[start]){
            if(target<=nums[mid] && target>=nums[start]){
                return find(nums, start, mid-1, target);
            }else{
                return find(nums, mid+1, end, target);
            }

        }else{ // right sorted
            if(target>=nums[mid] && target<=nums[end]){
                return find(nums, mid+1, end, target);
            }else{
                return find(nums, start, mid-1, target);
            }
             
        }

    }


    int search(vector<int>& nums, int target) {   
        return find(nums, 0, nums.size()-1, target);
    }
};