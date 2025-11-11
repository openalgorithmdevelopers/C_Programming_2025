#include<stdio.h>
int main()
{
        int i, j, count = 0, countB = 0;   
	char a = ' ';                      

        for(i=1;i<=9;i++)
        {
                for(j=1;j<=9;j++)
                        count++;
                printf("%d",i);           
                if(count==i)
                {
                        printf("\n");
                }
        }

        for(i=5;i>=1;i--)
        {
                for(j=1;j<=i;j++)
                {
                        printf("%c",a);
                }
                printf("\n");
        }

        for(i=0;i<=4;i++)
        {
                for(j=1;j<=(i*2-1);j++)
                {
                        printf("%c",a);
                }
                printf("\n");
        }

        printf("0         0\n");     

        for(i=1;i<=5;i++)
        {
                for(j=1;j<=i;j++)
                {
                        printf("%c",a);
                }
                printf("\n");
        }

        for(i=4;i>=1;i--)
        {
                for(j=1;j<=(i*2-1);j++)
                {
                        printf("%c",a);
                }
                printf("\n");
        }

        for(i=9;i>=1;i--)
        {
                for(j=9;j>=1;j--)
                {
                        printf("%d",j);
                        countB++;         
                }
                if(countB==i)
                {
                        printf("\n");
                }
        }
        return 0;
}

