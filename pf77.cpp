#include<stdio.h>
#define N 9
int grid[9][9];
bool cCol(int col, int num){ 
   for (int row = 0; row < N; row++)
      if (grid[row][col] == num)
         return true;
   return false;
}
bool cRow(int row, int num){ 
   for (int col = 0; col < N; col++)
      if (grid[row][col] == num)
         return true;
   return false;
}
bool cBox(int boxStartRow, int boxStartCol, int num){
   for (int row = 0; row < 3; row++)
      for (int col = 0; col < 3; col++)
         if (grid[row+boxStartRow][col+boxStartCol] == num)
            return true;
   return false;
}
void sudokuGrid(){ 
   for (int row = 0; row < N; row++){
      for (int col = 0; col < N; col++){
         printf("%d ",grid[row][col]);}
         printf("\n");}
}
bool findEmptyPlace(int &row, int &col){ 
   for (row = 0; row < N; row++)
      for (col = 0; col < N; col++)
         if (grid[row][col] == 0) 
            return true;
   return false;
}
bool isValidPlace(int row, int col, int num){
   return !cRow(row, num) && !cCol(col, num) && !cBox(row - row%3 ,col - col%3, num);
}
bool solveSudoku(){
   int row, col;
   if (!findEmptyPlace(row, col))
      return true; 
   for (int num = 1; num <= 9; num++){
      if (isValidPlace(row, col, num)){
         grid[row][col] = num;
         if (solveSudoku())
            return true;
         grid[row][col] = 0; 
      }
   }
   return false;
}
int main()
{
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        scanf("%d", &grid[i][j]);
    }
    if (solveSudoku() == true)
      sudokuGrid();
   else
      printf("No solution exists");
}