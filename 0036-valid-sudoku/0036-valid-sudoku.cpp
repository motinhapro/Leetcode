class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][10];
        bool col[9][10];
        bool boxes[9][10];

        for(int r = 0; r < 9; r++) {
            for(int c = 0; c < 9; c++) {

                if(board[r][c] == '.')
                    continue;

                int curr = board[r][c] - '0';
                int idx_box = (r/3) * 3 + (c/3);

                if(rows[r][curr] || col[c][curr] || boxes[idx_box][curr])
                    return false;

                rows[r][curr] = true;
                col[c][curr] = true;
                boxes[idx_box][curr] = true;
            }
        }

        return true;
    }
};