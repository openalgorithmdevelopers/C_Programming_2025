#include<stdio.h>
int main()
{
	int num=0;
	printf("Enter a number");
	scanf("%d",&num);
	while(num >=9){
		num =num/10;
	}
	printf("%d",num);
	return 0;
}
