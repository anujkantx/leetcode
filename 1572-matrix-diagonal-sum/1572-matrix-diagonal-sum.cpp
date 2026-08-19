class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum=0;

        for (int i=0; i<n; i++){
           int j = n-i-1;
           sum+=mat[i][i] + mat[i][j];
           if(i==j){
            sum-=mat[i][i];
           }
        }
        return sum;
        
    }
};