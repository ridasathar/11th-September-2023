/* This program is used to check whether a given year is leap or not. */
# include <stdio.h>

int main ()
{
	int a;
	scanf("%d",&a);
	if (a%4==0 &&(a%100!=0||a%400==0))
	printf("It is a leap year");
	else 
	printf("It is not a leap year");
	return 0;
}

