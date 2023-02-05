#include <stdio.h>

int main(void) {
  FILE *ifile;  
  int count, found;
  double number, compare, new;
  
  ifile = fopen("gradeComparison.txt", "r"); 
  count = 0;
  found = 0;
  new = 0;
  while(!found) {
    fscanf(ifile, "%lf", &number);
    if(count == 0){
      compare = number;
      count++;
    }else if(compare<number){
      count++;
      printf("No %d\n",count);
      found = 1;
    }else if(number==EOF){
      printf("Yes\n");
      found = 1;
    }else{
      count++;
    }
  }
  
  fclose(ifile);
  
  return(0);
}
