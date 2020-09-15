#include"checkSolution"
bool checkSolution() {
   int board[4][4];
   for(int i = 0; i<4; i++)
   for(int j = 0; j<4; j++)
   board[i][j] = 0;
   if ( solveNqueen(board, 0) == false ) {
      cout << "Solution does not exist";
      return false;
   }
