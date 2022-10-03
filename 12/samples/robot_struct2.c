#include <stdio.h>
#include <string.h>

typedef struct Robot{
  char name[50];
  double x, y;
} robot;

void PrintRobot(struct Robot* pr)
{
  printf("This is a robot!\n");
  printf("Robot name is: %s\n", pr->name);
  printf("Position: (%lf, %lf)\n", pr->x, pr->y);
}

int main(){
  robot r1, r2, r3, r2d2;
}
