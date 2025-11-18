#include<stdio.h>

int* sort(int* , int);
int larg_elem(int* , int , int);

int main()
{
	int size = 6;int n;
	int arr[] = {2,4,5,3,1,6};

	printf("Enter which largest element:");
	scanf("%d", &n);

	printf("Array before sorting:\n");
        for(int i=0;i<size;i++)
        {
                printf("%d ", arr[i]);
        }
	printf("\n");

	int *sorted = sort(arr , size);
	int largest = larg_elem(sorted , size , n);

	printf("Array after sorting:\n");
	for(int i=0;i<size;i++)
        {
                printf("%d ",sorted[i]);
        }

	printf("\n");
	printf("%d th largest element in array: %d \n" , n , largest);

	return 0;
}

int* sort(int* ba, int size)
{
    for (int i = 0; i < size; i++)
    {
        int max = ba[0];
        int max_i = 0;

        for (int j = 0; j < size - i; j++)
        {
            if (ba[j] > max)
            {
                max = ba[j];
                max_i = j;
            }
        }

        int temp = ba[size - 1 - i];
        ba[size - 1 - i] = ba[max_i];
        ba[max_i] = temp;
    }
    return ba;
}

int larg_elem(int* arr , int size , int n)
{
	int largest = arr[size - n];
	return largest;
}
