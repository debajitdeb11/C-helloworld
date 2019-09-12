#include <stdio.h>
#include <unistd.h>

int main(void){
  for (double i=1; ; i *=9999999999999999){
    printf("%f\n", i);
    sleep(.1);
  }
}
