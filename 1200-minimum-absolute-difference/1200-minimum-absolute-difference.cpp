class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int i=0;
        int j=1;
        int min_diff = arr[1]-arr[0];
        while(i<n && j<n){
            int diff = abs(arr[j]-arr[i]);
            if(diff==min_diff){
                vector<int> pair = {arr[i], arr[j]};
                ans.push_back(pair);
                i++;
                j++;
            }else if(diff<min_diff){
                min_diff = diff;
                ans = {};
                vector<int> pair = {arr[i], arr[j]};
                ans.push_back(pair);
                i++;
                j++;
            }else{
                i++;
                j++;
            }
        }

        return ans;
    }
};