#include <stdio.h>

int main()
{
         int a = 1;

         while (a <= 14)
         {
                a++;
                if(a%3==0)
                      continue;
                printf("%d " ,a);
         }
         return 0;
}

