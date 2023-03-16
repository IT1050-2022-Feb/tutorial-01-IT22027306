/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {

  float mark1;
  float mark2;
  float avg;

  printf("Enter Subject 1 mark : ");
  scanf("%f", &mark1);

  printf("Enter Subject 2 mark : ");
  scanf("%f", &mark2);

  avg = (mark1 + mark2) / 2;

  printf("Average mark is %.2f\n", avg);

  return 0;
}
