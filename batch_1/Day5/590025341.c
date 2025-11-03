#include <stdio.h>
int main()
{
	int num, count=0, copy=num;
	printf("enter the number:");
	scanf("%d",num);
	while(num != 0)
	{
		num = num / 10;
		count = count + 1;
	}
	while(count != 1)
		copy = copy / 10;
		count = count - 1;
	}
	printf("%d",copy);
	return 0;
}
