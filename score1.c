#include <stdio.h>
#include <cs50.h>

const int CONST = 5;

void chart (int score);

// *** Main Function ***
int main(int argc, char const *argv[]) {
    int score[3];

    for (int i = 0; i < CONST; i++) {

      // Input from the user
      score[i] = get_int("Score %i: ",i+1 );

    }

    // Chart Score
    for (int i = 0; i < CONST; i++) {
      printf("Score %i :\n", i+1 );
      chart(score[i]);
    }

  return 0;
}

void chart (int score){
  for (int i = 0; i < score; i++) {
    printf("#");
  }
  printf("\n");
}
