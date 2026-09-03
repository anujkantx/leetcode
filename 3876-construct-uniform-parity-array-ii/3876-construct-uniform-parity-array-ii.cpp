class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int> even;
        vector<int> odd;
        int min_e = INT_MAX; //4
        int min_o = INT_MAX;   //1
        for(int i=0; i<n; i++){
            if(nums1[i]%2==0){
                min_e = min(min_e, nums1[i]); 
            }else{
                min_o = min(min_o, nums1[i]);  
            }
        }
        for(int i=0; i<n; i++){
            if(nums1[i]%2!=0 && (nums1[i]-min_o)<=0){   //even
                break;
            }else{
                if(i==n-1) return true;
            }
        }

        for(int i=0; i<n; i++){
            if(nums1[i]%2==0 && (nums1[i]-min_o)<=0){   //odd
                break;
            }else{
                if(i==n-1) return true;
            }
        }

        return false;
    }
};