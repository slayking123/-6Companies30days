class Solution {
public:

     bool solve(int i, int j, vector<vector<char>> & board, string word) {
        if(word.size() == 0) {
            return true;
        }
        if(i < 0 || i >= board.size() || j < 0 || j > board[0].size() || board[i][j] != word[0]) {
            return false; 
        }
        char c = board[i][j];
        board[i][j] = '*';  
        string subs = word.substr(1);
        bool isFound = solve(i-1,j,board, subs) || solve(i,j+1,board, subs) || solve(i+1,j,board,subs) || solve(i,j-1,board, subs);
        board[i][j] = c;
        return isFound;
    }

    bool isWordExist(vector<vector<char>>& board, string word) {
                for(int i = 0; i < board.size(); ++i) {
            for(int j = 0; j < board[0].size(); ++j) {
                if(solve(i,j,board,word)){
                    return true;
                }
            }
        }
        return false; 
        // Code here
    }
};
