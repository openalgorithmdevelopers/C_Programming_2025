#include <stdio.h>
int main()
{
int i,j;
int r;
printf("Enter the number of rows: ");
scanf("%d", &r);
for(i=1; i<=r; i++)
  {
     for(j=1; j<i; j++) {
         printf(" ");
  }
     for(j=1; j<=r; j++) {
        printf("%d", j);
  }
     for (j=r+1-i; j<=i; j++) {
         printf("%d", j);
  }
   printf("\n");
  }
return 0;
}
