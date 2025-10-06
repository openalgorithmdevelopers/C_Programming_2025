#include<stdio.h>
int main()
{
	int n;
	printf("ENTER A NUMBER : ");
	scanf("%d", &n);

	if (n%2==0)
		printf("%d IS EVEN\n", n);
	else
		printf("%d IS ODD\n", n);
	return 0;
}
