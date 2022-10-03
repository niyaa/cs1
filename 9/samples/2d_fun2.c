#include <stdio.h>

#define N 500
#define M 200

void Init(int A[][M], int no_rows, int no_col){
  for(int i=0; i<no_rows; ++i)
  {
    for(int j=0; j<no_col; ++j)
    {
      A[i][j] = i+j+1; //as good as any
    }
  }
}

void Print(int A[][M], int no_rows, int no_col){
  for(int i=0; i<no_rows; ++i)
  {
    for(int j=0; j<no_col; ++j)
    {
      printf("%d\t", A[i][j]);
    }
    printf("\n");
  }
}

void CopyRow(int A[][M], int no_rows, int no_col, int row[], int r)
{
  for(int j=0; j<no_col; ++j)
  {
    row[j] = A[r][j];
  }
}

void InsertCollumn(int A[][M], int no_rows, int no_col, int col[], int c)
{
  for(int j=0; j<no_rows; ++j)
  {
    A[j][c] = col[j];
  }
}

int main(){
  int n, m;
  printf("The number of rows and collumns!\n");
  scanf("%d", &n);
  scanf("%d", &m);
  int tab[N][M]; // the size is specified by the define statment
  int row[M];
  int col[N];
  
  Init(tab, n, m);
  Print(tab, n, m);
  printf("\n-----------------\n");
  CopyRow(tab, n, m, row, 3); //3
  for(int j=0; j<m; ++j)
  {
    printf("%d\t", row[j]);
  }
  printf("\n-----------------\n");
  col[0]=100;col[1]=100;col[2]=100;col[3]=100;
  InsertCollumn(tab, n, m, col, 2); //2
  Print(tab, n, m);
}






