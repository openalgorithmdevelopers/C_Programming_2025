#include <stdio.sh>
int main(){
	int num,sum = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
	int temp = num;
	int count = 0;
	int power = 1;
	while(temp>0){
		count++;
		temp/=10;
	}
	
	while(count>0){
		power*=10;
		count/=10;
	}

	int f = num/(power/10);
	int s = num/(power/100);
	int t = num/(power/1000);
	sum = f+s+t;
	
	return 0;
}
