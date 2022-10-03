#include <stdio.h>
#include <string.h>

int mystrcmp(char *s1, char *s2)
{
  for(int i=0; 1; ++i)
  { 
    if(s1[i] - s2[i] != 0)
      return s1[i] - s2[i];
    if(s1[i] == '\0' || s2[i] == '\0' ) break;
  }
  return 0;
}

int main(){
  char a[] = "aaa";
  char key[]="aaa";
  int res = mystrcmp( a, key );
  printf("%d\n", res);
}
