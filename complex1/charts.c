#include <stdio.h>
#include <cs50.h>

const int COUNT = 5;

void charts(int scores);

int main(void){

  // Get score from the User!
  int scores[COUNT];
  for (int i = 0; i < COUNT; i++) {
    scores[i] = get_int("Score %i ", i + 1);
  }

  // Charts Score
  for (int i = 0; i < COUNT; i++) {
    printf("Score %i :", i + 1 );
    charts(scores[i]);

  }
}

// Generate Bars
void charts(int scores){

  //Output one hash per point
  for (int i = 0; i < scores; i++) {
    printf("#");
  }
  printf("\n");
}
