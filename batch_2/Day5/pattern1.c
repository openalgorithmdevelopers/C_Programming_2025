#include<stdio.h>
int main()
{
int i;
char ch='A';
int j;

for(i=6;i>=1;i--)
{
for(j=1;j<=i;j++)
{printf("%c", ch);
ch++;
}
printf("\n");
} 
for(i = 2; i <= 3; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
}
}
