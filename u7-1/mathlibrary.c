#include <stdio.h>
#include <math.h> // use the directory /usr/lib/x86_64-linux-gnu/libm.so or -lm with this.

//double pow(double x,double y); use the directory /usr/lib/x86_64-linux-gnu/libm.so with this.

int main(void){
  double a=2.5;
  double asquare = pow(a,2);
  printf("The square of %.2lf is %.2lf.\n",a,asquare);

  return 0;
}
