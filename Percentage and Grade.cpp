/* This program is used to calculate percentage and grade .*/
# include <stdio.h>
# include <math.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("%d",f);
	if (f>=90)
	printf("Grade A");
	else if(f>=80)
	printf("Grade B");
	else if(f>=70)
	printf("Grade C");
	else if(f>=60)
	printf("Grade D");
	else if(f>=40)
	printf("Grade E");
	else
	printf("Grade F");
	return 0;
}


