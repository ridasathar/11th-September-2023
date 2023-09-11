/* This program is used to check if three numbers are equal. */
# include <stdio.h>
# include <math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a==b|| b==c|| c==a)
	printf("Equal");
	else
	printf("Not equal");
	return 0;
}
