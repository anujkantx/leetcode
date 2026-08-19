class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans;

        int sr = 0;
        int er = m-1;
        int scol = 0;
        int ecol = n-1;

        while(sr<=er && scol <= ecol){
           for(int j=sr; j<=ecol; j++){
               ans.push_back(matrix[sr][j]);
           }
           for(int i=sr+1; i<=er; i++ ){
               ans.push_back(matrix[i][ecol]);
           }
            if(sr == er || scol == ecol) break;
           for(int j=ecol-1; j>=scol; j--){
               ans.push_back(matrix[er][j]);
           }
           for(int i=er-1; i>=sr+1; i--){
               ans.push_back(matrix[i][scol]);
           }
           sr++;
           er--;
           scol++;
           ecol--;
        }

        return ans;
        

    }
};