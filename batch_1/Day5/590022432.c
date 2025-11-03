#include<stdio.h>
int main()
{
	int num;
	int extract;
	
	printf("ENTER A NUMBER : ");
	scanf("%d", &num);
	
	if (num < 10)
	{
		printf("2nd significant not exists");
	}

	while (num >= 10)
	{	
		extract=num%10;
		num=num/10;
	}
	printf("the second significant is : %d\n ", extract);
	return 0;
}
