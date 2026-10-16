class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col){

        int n = board.size();
        // horizontal isSafe
        for(int j=0; j<=col; j++){
            if(board[row][j]=='Q') return false;
        }

        //vertical
        for(int i=0; i<=row; i++){
            if(board[i][col]=='Q') return false;
        }

        //diagonal left
        int i=row;
        int j=col;
        while(i>=0 && j>=0){
            if(board[i][j]=='Q') return false;
            i--;
            j--;
        }

        i=row;
        j=col;
        while(i>=0 && j<n){
            if(board[i][j]=='Q') return false;
            i--;
            j++;
        }


        return true;
    }
    void nQueens(vector<string>& board, int row, vector<vector<string>>& ans){
        int n=board.size();
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int j=0; j<n; j++){
            if(isSafe(board, row, j)){
                board[row][j]='Q';
                nQueens(board, row+1, ans);
                board[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        vector<vector<string>> ans;

        for(int i=0; i<n; i++){

            string newRow = "";

            for(int j=0; j<n; j++){
                newRow+=".";        }
            board.push_back(newRow);
        }
        nQueens(board,0, ans);

        return ans;
    }
};