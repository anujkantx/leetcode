class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int tw = 0;
        int left = 0;
        int right = n-1;
        int maxleft = 0; //height
        int maxright = 0; //height

        while(left<=right){
            if(height[left]<=height[right]){
                //left process
                if(height[left]<maxleft){
                    tw += maxleft - height[left];
                    left++;
                }else{
                    maxleft = max(maxleft, height[left] );
                    left++;
                }
            }else{
                // right process
                if(height[right]<maxright){
                    tw += maxright - height[right];
                    right--;
                }else{
                    maxright = max(maxright, height[right]);
                    right--;
                }
            }
        }
        return tw;
    }
};