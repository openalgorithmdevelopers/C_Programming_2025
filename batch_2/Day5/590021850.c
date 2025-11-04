#include<stdio.h>
int main(){
int i,j;
char ch;
ch='A';
for(i=6;i>0;i--){
for(j=0;j<i;j++){
printf("%c",ch);
ch++;
}
printf("\n");
}
for(i=2;i<=3;i++){
for(j=0;j<i;j++){
printf("%c",ch);
ch++;
}
printf("\n");
}
return 0;
}
