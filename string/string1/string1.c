#include <stdio.h>
#include <cs50.h>

int main(void){
  string s = get_string("Enter Your Name:");

  int n = 0;
  while(s[n] != '\0'){
    n ++;
  }
  printf("The Length of the string is %i \n", n);
}
