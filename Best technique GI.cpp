/* This program is used to find the best technique. */
# include <stdio.h>
int main ()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	printf("The greatest number is %d",a);
	else if (b>c)
	printf("The greatest number is %d",b);
	else 
	printf("The greatest number is %d",c);
	return 0;
}
