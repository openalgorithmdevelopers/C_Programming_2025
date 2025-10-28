#include<stdio.h>
void printsequence(){
int num = 3;
int diff=5;
for (int i=0;i<6;i++){
printf("%d ",num);
num +=diff;
diff +=2;
}
printf("\n");
}
int main(){
printsequence();
return 0;
}
