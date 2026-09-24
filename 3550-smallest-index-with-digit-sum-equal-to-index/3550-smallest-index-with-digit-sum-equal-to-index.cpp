class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=10){
                int sum=0;
                int num = nums[i];
                while(num>0 && sum<=i){
                    sum += num%10;
                    num = (num - num%10)/10;
                }
                if(sum == i) return i;
            }else if(i==nums[i]) return i;
        }

        return -1;
    }
};