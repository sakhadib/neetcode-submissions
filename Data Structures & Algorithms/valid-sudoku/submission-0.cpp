class Solution {
public:
    vector<vector<int>> convert(vector<vector<char>>& board){
        vector<vector<int>> res(board.size(), vector<int>(board[0].size()));
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[i].size(); j++){
                if(board[i][j] == '.'){
                    res[i][j] = 0;
                }
                else{
                    res[i][j] = board[i][j] - '0';
                }
            }
        }

        return res;
    }


    bool isValidSudoku(vector<vector<char>>& board2) {
        vector<vector<int>> board = convert(board2);

        // Optional: confirm 9x9 size
        if (board.size() != 9) return false;
        for (const auto& row : board)
            if (row.size() != 9) return false;

        // Check rows
        for (int i = 0; i < 9; ++i) {
            bool seen[10] = {};          // all false (indices 1–9 used)
            for (int j = 0; j < 9; ++j) {
                int val = board[i][j];
                if (val == 0) continue;
                if (val < 1 || val > 9 || seen[val]) return false;
                seen[val] = true;
            }
        }

        // Check columns
        for (int j = 0; j < 9; ++j) {
            bool seen[10] = {};
            for (int i = 0; i < 9; ++i) {
                int val = board[i][j];
                if (val == 0) continue;
                if (val < 1 || val > 9 || seen[val]) return false;
                seen[val] = true;
            }
        }

        // Check 3x3 sub‑boxes
        for (int box = 0; box < 9; ++box) {
            bool seen[10] = {};
            int startRow = (box / 3) * 3;
            int startCol = (box % 3) * 3;
            for (int i = startRow; i < startRow + 3; ++i) {
                for (int j = startCol; j < startCol + 3; ++j) {
                    int val = board[i][j];
                    if (val == 0) continue;
                    if (val < 1 || val > 9 || seen[val]) return false;
                    seen[val] = true;
                }
            }
        }

        return true;

    }
};
