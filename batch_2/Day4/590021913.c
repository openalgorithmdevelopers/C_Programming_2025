#include <stdio.h>

int main()
{
<<<<<<< HEAD
	int n;
	
	printf("enter number");
	scanf("%d", &n);

	while ( n > 100 ){
		n = n/10;
	}

	printf ("%d", n);

	return 0;
=======
int n;
printf("enter number");
scanf("%d",&n);
while (n>=100){
n=n/10;
}
printf ("%d",n);
return 0;
>>>>>>> 78187cc9509b802ea7d7aace651874d23ea1a9af
}
