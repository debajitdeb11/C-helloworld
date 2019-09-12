#include <stdio.h>

int main(void) {

  char a;

  printf("Enter the option:\n Y or y for yes \n N or n for No \n");

  scanf("%c\n", &a);

  if (a == 'Y' || a == 'y') {
    printf("Bro you win!!!!\n");
  }
  else if (a == 'N' || a == 'n') {
    printf(" Bro try to do it again \n");
  }

  else {
    printf("Fucked up \n");
  }
}
