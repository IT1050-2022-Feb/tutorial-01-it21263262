/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int radius,diameter;
	float circumference,area;
	printf("Enter the radius:");
	scanf("%d\n",&radius);
	
	diameter=radius*2;
	circumference=2*3.14*radius;
	area=3.14*radius*radius;
	
	printf("Diameter is:%d\n",diameter);
	printf("Circumference is:%.2f\n",circumference);
	printf("Area is:%.2f\n",area);
  
  
  return 0;
}

