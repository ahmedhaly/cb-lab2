#include"printboard.h"
void printBoard(int board[4][4]) {
   for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++)
         cout << board[i][j] << " ";
         cout << endl;
   }
}
