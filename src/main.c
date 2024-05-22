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
void rectangle_with_number_and_ast(int base, int height);
void variables();
void user_input();

int main() {
  // format_string();
  //  isoceles();
  // operations(5.0, 2.0);
  // rectangle(10, 5);
  // rectangle_with_number_and_ast(10, 5);
  // variables();
  user_input();
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
    for (int j = 0; j < base; ++j) {
      printf("*");
    }
    printf("\n\t");
  }
}

void rectangle_with_number_and_ast(int base, int height) {
  for (int l = 1; l <= height; l++) {
    for (int c = 1; c <= base; c++) {
      if (c <= l) {
        printf("%d", c);
        continue;
      }
      printf("*");
    }
    printf("\n");
  }
}

void variables() {
  // -> variables are stored in a memory address
  // <type> <name> = <content>

  // variable declaration
  int numeric;
  // varible assignment
  numeric = 5;

  // declaration + assignment
  int age = 8;
  double temp = 27.5;

  printf("%d\n", age);
}

void user_input() {
  double gradex;
  double gradey;
  printf("type the first grade: ");
  scanf("%lf", &gradex);

  printf("type the second grade: ");
  scanf("%lf", &gradey);

  printf("average grade: %.2lf\n", (gradex + gradey) / 2);
  printf("multiplication of the grades: %.2lf\n", gradex * gradey);
  printf("perimeter of the grades: %.2lf\n", (gradex * 2) + (gradey * 2));
  printf("a memory address: %p\n", &gradex);
  printf("the value of the pointer: %lf\n", *(&gradex));
}
