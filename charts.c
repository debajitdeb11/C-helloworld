#include <stdio.h>
#include <cs50.h>

const int COUNT = 3;

void chart(int score);

int main(int argc, char const *argv[]) {
  int score[COUNT];

  for (int i = 0; i < COUNT; i++) {
    score[i] = get_int("Score 1: %i", i+1);
  }

  for (int i = 0; i < COUNT; i++) {
    printf("Scores %i:", i+1);
    chart(score[i]);
  }

  return 0;
}

void chart(int score) {
  for (int i = 0; i < score; i++) {
    printf("#");
  }
  printf("\n");
}
