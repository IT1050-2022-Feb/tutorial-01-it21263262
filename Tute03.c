/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 10
sum = 1+2+3+...+10 = 55 */

#include<stdio.h>
int main()
{
  int n;
  float sum;

  printf("Enter the no. of terms :");
  scanf("%d", &n);
  
  sum = (n * (n + 1) ) / 2;
  printf("Sum of %d natural number is = %.2f", n,sum);
  
  return 0;
}

