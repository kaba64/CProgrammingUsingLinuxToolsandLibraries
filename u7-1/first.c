#include <stdio.h>
double square(double x);

int main(void){
  double a = 2.5;
  double asquare = square(a);
  printf("%.2lf squared = %.2lf\n",a,asquare);
  return 0;
}

double square(double x){
  
  return (x*x);
}
