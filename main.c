// Author: Chang Li cxl5844@psu.edu
// Collaborator:
// Collaborator:
// Section: 1
// Breakout: 14

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *a = readline("Enter your CMPSC 131 grade: ");
  double g = atof(a);
  if(g<60){
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  else if(g<=70){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else if(g<=77){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if(g<=80){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if(g<=83){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if(g<=87){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if(g<=90){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  return 0;
}