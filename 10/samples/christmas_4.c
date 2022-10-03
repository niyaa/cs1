#include <stdio.h>

void fun(int rows, int move)
{
	int k;
	for(int i=1; i<=rows; ++i, k=0)
  {
      for(int space=1; space<=rows+move-i; ++space)
      {
          printf("  ");
      }

      while(k != 2*i-1)
      {
          printf("* ");
          ++k;
      }

      printf("\n");
  }
}

int main()
{
    int i, space, rows, k=0;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

		for(int i=0; i<=rows; ++i)
	  	fun(i,rows-i+5);
    
    return 0;
}
