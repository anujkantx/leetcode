class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int i=0;
        int x=1;
        while(k!=0){
            if(i<=n-1 && arr[i]==x){
                i++;
                x++;
            }else{
                x++;
                k--;
            }
        }
        return x-1;
    }
};