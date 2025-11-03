// WAP to print the number formed from the first and 2nd last digit of a given number

#include <stdio.h>

int main() {

int num ;

  printf("enter a number:");
  scanf("%d%",&num);

  while(num!=0){

    if(num=(num/10)%10){
    printf("%d ",num);
   break ;
    }

    }
    while(num!=0){
     num= num%10 ;
     if(num=num%10) {
     printf("%d ",num);
     break ;
     }



    }
    return 0;
    }
