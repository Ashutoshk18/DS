//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if ( a == b && b == c)
	{
		printf("Equilateral");
	}
	else if (a == b || b == c)
	{
		printf("Isoceles");
	}
	else
	{
		printf("Scalene");
	}
	return 0;
}