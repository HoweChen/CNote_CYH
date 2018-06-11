//
// Created by Howe Chen on 11/06/2018.
//

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int numbers[4] = {0};
  char name[4] = {'Z', 'e', 'd', '\0'};

  printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  for (int i = 0; i < sizeof(name) / sizeof(char); ++i) {
    printf("%c", name[i]);
  }

  char *another = "Zed";
  printf("another: %s\n", another);
  printf("Size of another: %ld\n", sizeof(*another));
  printf("Size of another: %ld\n", strlen(another));
}