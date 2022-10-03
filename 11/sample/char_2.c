//Write a program storing multiple characters inside an array of characters - A word or a sentence
#include <stdio.h>

int main(){
  char word[256]; //an array of characters, let us see what is inside
    
  word[0] = 'H';
  word[1] = 'e';
  word[2] = 'l';
  word[3] = 'l';
  word[4] = 'o';
  word[5] = ' ';
  word[6] = 'W';
  word[7] = 'o';
  word[8] = 'r';
  word[9] = 'l';
  word[10] = 'd';
  word[11] = '\0';
  
  for(int i=0; i<20; ++i)
  {
    printf("%c", word[i]);
  }
  printf("\n");
  
  //for(int i=11; i<256; ++i)
  //{
  //  word[i]=48;
  //}
  printf("%s\n", word);//We will print a string
}



