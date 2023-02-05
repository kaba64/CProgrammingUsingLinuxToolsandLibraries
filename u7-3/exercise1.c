#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

int main(int argc, char *argv[]) {
  int Number;
  double price;
  
  if (argc!=3) {
    printf("Invalid input.\n");
  }else{
    Number = atoi(argv[1]);
    price = atof(argv[2]);
    printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n",Number,price,Number*price);
  }
  return 0;
}
