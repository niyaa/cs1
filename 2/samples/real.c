#include <stdio.h>
#include <math.h>

int main()
{
  printf("Storage size for float : %ld B \n", sizeof(float));
  printf("Storage size for double : %ld B \n", sizeof(double));
  float a = 4.0 * atan(1.0); // This is PI
  double b = 4.0 * atan(1.0); // This is PI
  printf("a=%f, a=%e, a=%E, a=%g, a=%G\n", a, a, a, a, a);
  printf("b=%f, b=%e, b=%E, b=%g, b=%G\n", b, b, b, b, b);
  a = 6.02214085774e23;
  b = 6.02214085774e23;
  printf("a=%f, a=%e, a=%E, a=%g, a=%G\n", a, a, a, a, a);
  printf("b=%f, b=%e, b=%E, b=%g, b=%G\n", b, b, b, b, b);
}
