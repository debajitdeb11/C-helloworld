#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void){
  string s = get_string("INPUT:");

  for (int i = 0; i < strlen(s); i++) {
    printf("%i\n", s[i]);
  }

}
