//Check whether the year entered by the user is a leap year or not.
#include<stdio.h>
int main()
{
	int y;
	scanf("%d", &y);
	if ( y % 100 != 0 && y % 4 == 0 || y % 400 == 0)
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not a Leap Year");
	}
	return 0;
}