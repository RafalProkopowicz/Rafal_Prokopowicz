#include <stdio.h>
#include <math.h>
int main() {
  double deg,rad;
  printf("daj kąt w stopniach");
  scanf("%lf\n", &deg);
  rad = 2*M_PI*deg/360;
  printf("%lf deg = %lf rad \n", deg, rad);
  return 0;
}
