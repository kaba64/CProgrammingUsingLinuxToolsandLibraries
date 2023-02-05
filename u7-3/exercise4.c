#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *ofile;  
  char filename[] = "myGrades.txt";
  int number, lastnum, newnum;

  scanf("%d",&newnum);
  ofile = fopen(filename, "r"); 
  while (fscanf(ofile, "%d", &number)!=EOF) {
     lastnum = number;
  }

  fclose(ofile);

  ofile = fopen(filename, "a");
  if(lastnum!=newnum){
    fprintf(ofile, " %d", newnum);
  }
  
  fclose(ofile);
  
  ofile = fopen(filename, "r");
  while(fscanf(ofile, "%d", &number)!=EOF){
    printf("%d \n",number);
  }
  
  fclose(ofile);
  return 0;
}
