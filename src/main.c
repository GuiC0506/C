#include <math.h>
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
void operations(double x, double y);
void rectangle(int base, int height);

int main() {
  // format_string();
  //  isoceles();
  // operations(5.0, 2.0);
  rectangle(10, 5);
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

void operations(double n, double x) {
  printf("%.1f + %.1f = %.1f\n", n, x, n + x);
  printf("%.1f - %f = %.1f\n", n, x, n - x);
  printf("%.1f * %f = %.1f\n", n, x, n * x);
  printf("%.1f / %.1f = %.1f\n", n, x, n / x);
  printf("%.1f modulus %.1f = %f\n", n, x, fmod(n, x));
}

void rectangle(int base, int height) {
  for (int i = 0; i < height; ++i) {
    if (i == 0)
      printf("\t");

    for (int j = 0; j < base; ++j) {
      printf("*");
    }
    printf("\n\t");
  }
}
