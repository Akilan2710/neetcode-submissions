class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> rows(9),cols(9);
        vector<vector<set<char>>> boxes(3,vector<set<char>> (3));
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int lr = rows[i].size(), lc = cols[j].size(), ls = boxes[i/3][j/3].size();
                    rows[i].insert(board[i][j]);
                    if(lr==rows[i].size()){
                        return false;
                    }
                    cols[j].insert(board[i][j]);
                    if(lc==cols[j].size()){
                        return false;
                    }
                    boxes[i/3][j/3].insert(board[i][j]);
                    if(ls==boxes[i/3][j/3].size()){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
