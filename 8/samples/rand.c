//Write a program that generates N random numbers
//and stores them to a file.
#include <stdio.h>
#include <stdlib.h> //rand, srand, 
#include <time.h> //time

int main()
{
  FILE *fp = fopen("rand.dat", "w");
  srand(time(NULL)); //<<<===
  
  int n;
  scanf("%d", &n);
  fprintf(fp, "%d\n", n);
  for(int i=0; i<n; ++i)
  {
    fprintf(fp, "%d\n", rand()); //<<<====
  }
  
  fclose(fp);
}
