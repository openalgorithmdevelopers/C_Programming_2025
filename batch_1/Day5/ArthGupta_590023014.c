#include <stdio.h>

int main()
{
 int num;
 int result;
 printf("Enter The Number: \n");
 scanf("%d", &num);
 int tempNum = num;
 int digCount = 0;

 while(tempNum != 0)
 {
  digCount++;
  tempNum/=10;
 }

 while(digCount != 0)
{ 
  int rem = num % 10;
  if(digCount == 3)
  {
   result = rem;
   break;
  }
  digCount--;
  num/=10;
}

printf("Third Digit Is %d \n", result);
return 0;
}
            
