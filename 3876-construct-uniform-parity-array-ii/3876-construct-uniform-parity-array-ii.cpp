class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int min_o = INT_MAX;  
        for(int i=0; i<n; i++){
            if(nums1[i]%2!=0){
                min_o = min(min_o, nums1[i]);  
            }
        }
        for(int i=0; i<n; i++){
            if(nums1[i]%2!=0 && (nums1[i]-min_o)<=0){   
                break;
            }else{
                if(i==n-1) return true;
            }
        }

        for(int i=0; i<n; i++){
            if(nums1[i]%2==0 && (nums1[i]-min_o)<=0){  
                break;
            }else{
                if(i==n-1) return true;
            }
        }

        return false;
    }
};