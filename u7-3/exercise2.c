#include <stdio.h>

int main(void) {
  FILE *ifile;  /* ifile is a variable name - you could use any other name here. 
		   However, the '*' is important - we are working with a pointer. 
		   We call this a file pointer. */
  int i, N, num;
  double avg;
  
  ifile = fopen("studentGrades.txt", "r"); /* open file for reading. 
					      The "r" stands for reading. */
  
  fscanf(ifile, "%d", &N); /* Read first number from the file.
			      Just like scanf(), the only difference is the 
			      file pointer that gets passed in as well. */
  avg = 0.;
  for (i = 0; i<N; i++) {
    fscanf(ifile, "%d", &num);
    avg = avg + num;
  }

  avg = avg/(int) N;
  printf("%.2lf/n",avg);  
  fclose(ifile); /* closes the file */
  
  return 0;
}
