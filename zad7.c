#include <stdio.h>
#include <math.h>
int main() {
  double deg,rad;
  printf("daj kąt w stopniach");
  scanf("%lf\n", &deg);
  rad = deg/180;
  printf("%lf deg = %lfπ rad \n", deg, rad);
  return 0;
}
