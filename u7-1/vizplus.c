#include <stdio.h>
#include <jpeglib.h>

int main(void) {
  printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra vizplus.c -ljpeg -o vizplus\n");
  return 0;
}
