#include <stdio.h>
#include <math.h>

int main() {
  printf("%d\n", 2+2); //dodawanie
  printf("%d\n", 2-2); //odejmowanie
  printf("%d\n", 2*2); //mnożenie
  printf("%d\n", 2/2); //dzielenie
  printf("%d\n", 2|2); //alternatywa bitowa
  printf("%d\n", 2&2); //koniunkcja bitowa
  printf("%d\n", 2||2); //alternatywa "lub"
  printf("%d\n", 2&&2); //koniunkcja "i"

  //0 - fałsz
  //1 - prawda
  printf("%d\n", 2>=2); //wieksze równe
  printf("%d\n", 2<2); //mniejsze
  printf("%d\n", 2>2); //wieksze
  printf("%d\n", 2==2); //równe
  printf("%d\n", 2>=2); //wieksze równe

  printf("%d\n", 2>>2); //przesuniecie bitowe w prawo
  printf("%d\n", 2<<2); //przesuniecie bitowe w lewo
  return 0;
}
