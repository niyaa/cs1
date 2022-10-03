#include <stdio.h>
#include <string.h>

int main(){
  char a[] = "AsssBC";//65 66 67
  char b[] = "abffffdsadsadc";//97 98 99

  printf("%s \n", a);
  printf("%s \n", b);

  //strcpy( b, a );

  printf("%s \n", a);
  printf("%s \n", b);
  
  int l1=strlen(a);
  int l2=strlen(b);
  
  printf("%d %d\n", l1, l2);
}
