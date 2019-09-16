#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void){
  string s = get_string("input: ");

  int n = strlen(s);

  for (int i = 0; i < n; i++) {
    printf("%c\n", s[i] );
  }
}
