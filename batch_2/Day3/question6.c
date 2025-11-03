// WAP TO PRINT 1,2,4,5,7,8,10,11,13,14

#include <stdio.h>

int main(){

  int i=1 ;

  while(i<=14){
   if(i%3==0){
   i++ ;
   continue;

   }
   printf("%d ",i);
    i++ ;

   }
   return 0;
   }
