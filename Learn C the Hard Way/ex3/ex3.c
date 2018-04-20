//
// Created by Howe Chen on 01/04/2018.
//

#include <stdio.h>

int main() {
  // if this is static and the age is uninitialized, than the result is 0
  static int age_static;
  // if this the static is rmoved, than the age would be assigned with the value dynamically because it's initialized on the stack, and every time you run the program the result would be different.
  int age_without_static;
  int age = 15;
  int height = 72;
  printf("I am %d years old with age_static.\n", age_static);
  printf("I am %d years old with age_without_static.\n", age_without_static);
  printf("I am %d years old with age.\n", age);
  printf("I am %d inches tall.\n", height);

  return 0;

}