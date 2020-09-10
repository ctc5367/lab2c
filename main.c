// Author: Cole Carter ctc5367@psu.edu
// Collaborator: Ethan Moyer epm5482@psu.edu
// Collaborator: Zak Young zjy5116@psu.edu
// Collaborator: Mark Del Grande mxd5728@psu.edu
// Section: 5
// Breakout: 4 

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {

  char* grade = readline("Enter your CMPSC 131 grade: ");
  double cgrade = atof(grade);

  if(cgrade >= 93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if(cgrade >= 90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if(cgrade >= 87.0){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if(cgrade >= 83.0){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if(cgrade >= 80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if(cgrade >= 77.0){
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if(cgrade >= 70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if(cgrade >= 60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else{
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}
