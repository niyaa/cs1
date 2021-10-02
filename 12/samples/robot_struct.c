#include <stdio.h>
#include <string.h>

struct Robot{
  char name[50];
  double x, y;
} r1;

void PrintRobot(struct Robot* pr)
{
  printf("This is a robot!\n");
  printf("Robot name is: %s\n", pr->name);
  printf("Position: (%lf, %lf)\n", pr->x, pr->y);
}

int main(){
  strcpy(r1.name, "Ala");
  r1.x = 10;
  r1.y=9;
  
  PrintRobot(&r1);
  
  printf("%d\n", sizeof(struct Robot));
}
