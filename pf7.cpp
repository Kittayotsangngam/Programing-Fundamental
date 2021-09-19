#include <stdio.h>
#define N 9
void print(int arr[N][N]){
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    }
int safe(int sudoku[N][N], int row,
                       int col, int num)
{
    for (int x = 0; x <9; x++)
        if (sudoku[row][x] == num)
            return 0;
    for (int x = 0; x <9; x++)
        if (sudoku[x][col] == num)
            return 0;
    int startRow = row - row % 3,
                 startCol = col - col % 3;
   
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (sudoku[i + startRow][j +
                          startCol] == num)
                return 0;
 
    return 1;
}
int solveSuduko(int sudoku[N][N], int row, int col)
{
    if (row == N - 1 && col == N)
        return 1;
    if (col == N)
    {
        row++;
        col = 0;
    }
    if (sudoku[row][col] > 0)
        return solveSuduko(sudoku, row, col + 1);
 
    for (int num = 1; num <= N; num++)
    {
         
        if (safe(sudoku, row, col, num)==1)
        {
            sudoku[row][col] = num;
            if (solveSuduko(sudoku, row, col + 1)==1)
                return 1;
        }
        sudoku[row][col] = 0;
    }
    return 0;
}
int main()
{ 
    int sudoku[N][N];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        scanf("%d", &sudoku[i][j]);
    }
    if (solveSuduko(sudoku, 0, 0)==1)
        print(sudoku);
    else
        printf("No solution exists");
    return 0;
}