#include"solveNqueen.h"
bool solveNqueen(int board[4][4], int col) {
if (col >= 4)
return true;
for (int i = 0; i < 4; i++) {
if (isValid(board, i, col) ) {
board[i][col] = 1;
if ( solveNQueen(board, col + 1))
return true;
board[i][col] = 0;
}
}


