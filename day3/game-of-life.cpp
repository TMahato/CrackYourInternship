class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size(), col = board[0].size();
        for(int r = 0; r < row; r++) {
             for(int c = 0; c < col; c++) {
                int live = 0;
                for(int sub_y = r-1; sub_y <= r+1; sub_y++) {
                    for(int sub_x = c-1; sub_x <= c+1; sub_x++) {
                        if(sub_x < 0 || sub_y < 0 || sub_x >= col || sub_y >= row) continue;
                        if(sub_y == r && sub_x == c) continue;
                        if(abs(board[sub_y][sub_x]) == 1) live++;
                    }
                }
                if(board[r][c] == 1 && (live < 2 || live > 3)) board[r][c] = -1;
                if(board[r][c] == 0 && live == 3) board[r][c] = 2; 
            }
        }
        for(int r = 0; r < row; r++) {
            for(int c = 0; c < col; c++) {
                if(board[r][c] > 0) board[r][c] = 1;
                else board[r][c] = 0;
            }
        }
    }
};