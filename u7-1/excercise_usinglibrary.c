#include <stdio.h>
#include <math.h>

int main(void){
  int num;
  double square_root, expon;
  scanf("%d",&num);
  square_root = sqrt(num);
  expon = exp(1);
  printf("%.8lf\n", square_root);
  printf("%.8lf\n", expon);
  printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -lm -o program");
}
