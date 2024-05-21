#include <stdio.h>
#include <stdlib.h>

// the entry point of the program
/*
 * multiline
 * comment
 *
 */

void format_string();
void isoceles();

int main() {
  format_string();
  // isoceles();
  return 0;
}

void format_string() {
  printf("name: %s\nage:%d\ngender: %s\n", "churros augusto", 9, "male");
  printf("hello churros\n");
  printf("I am %d\n", 19);
  printf("My weight: %.2f\n", 58.659);
  printf("My weight: %d\n", 58.5); // any memory value in this case
}

void isoceles() {
  printf("  * \n ***\n*****\n");
  printf("------------\n");

  printf("  *\n");
  printf(" ***\n");
  printf("*****\n");
}
