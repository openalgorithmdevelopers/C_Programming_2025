#include <stdio.h>

float avg(int *, int);

int main()
{
    int myarr[] = {1, 2, 3, 4, 5};
    float avg_sl_l;
    avg_sl_l = avg(myarr, 5);
    printf("avg %f", avg_sl_l);
    return 0;
}

float avg(int *pa, int s)
{
    int max = pa[0];
  
    int s_max = -1; 

    for (int i = 1; i < s; i++)
    {
        if (pa[i] > max)
        {
            s_max = max;
            
            max = pa[i];
        }
        else if (pa[i] > s_max && pa[i] != max)
        {
            s_max = pa[i];
        }
    }


    float average;
    average = max + s_max;
    average = average / 2.0; 
    return average;
}
