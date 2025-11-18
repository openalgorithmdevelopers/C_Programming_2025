#include <stdio.h> 

float avg12L (int*,int);
float avg23L (int*,int);
float avg12S (int*,int);
float avg23S (int*,int);
int get_n_Largest (int*,int);
int get_n (int*,int);

void array_sort(int *A,int L)
{
	for (int i=1 ; i<=L ; i++)
	{	
		for (int j=1 ; j<=L ; j++)
		{
			if (A[j] >= A[j-1])
			{
				int x=A[j-1];
				A[j-1]=A[j];
				A[j]=x;
			}
		}
	}
}
			
void main ()
{
	int array[]={1,3,6,632,-5,8,9,6,3,2,5,7,8,6,5,3,3,3,4,68,9,0,7,-4,3,4,6,7,7,64,-46,10},L=32;
	
	array_sort(array,L);
	printf ("sorted array= ");
	for (int i=0 ; i<L ; i++)
	{
		printf ("%d ",array[i]);
	}
	
	printf ("\n%.2f", avg12L(array,L) );
	printf ("\n%.2f", avg23L(array,L) );
	printf ("\n%.2f", avg12S(array,L) );
	printf ("\n%.2f", avg23S(array,L) );
	printf ("\n%d", get_n_Largest(array,L) );
	printf ("\n%d", get_n(array,L) );

}

float avg12L(int *A,int len)
{
	float avg=(A[0]+A[1])/2.0;
	return avg;
}

float avg23L(int *A,int L)
{
	float avg=(A[1]+A[2])/2.0;
	return avg;
}

float avg12S(int *A,int L)
{
	float avg=(A[-1]+A[-2])/2.0;
	return avg;
}

float avg23S(int *A,int L)
{
	float avg=(A[-2]+A[-3])/2.0;
	return avg;
}

int get_n_Largest(int *A,int L)
{
	int n;
	printf ("\nenter nth no: ");
	scanf ("%d",&n);
	return A[n-1];
}

int get_n(int *A,int L)
{
	int n;
	printf ("\nenter no. you want to find: ");
	scanf ("%d",&n);
	
	for (int i=0 ; i<L ; i++)
	{	
		if (A[i]==n)
		{
			printf ("%d found @ %d",n,i);
			break;
		} 
	}
}		
			

