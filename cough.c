#include <stdio.h>
#include <string.h>

void cough(void){
  printf("I'm Suffering \n");
}


int main(int argc, char const *argv[]) {
  /* code */
  char a;
  printf("Hello, ");
  scanf("%c", &a);
  printf("%c\n", a);

  for (int i = 0; i < 1000; i++) {
    /* code */

    cough();

  }
  return 0;
}
