#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

void shell(double x[],int n);
int main()
{
    double x[MAX];
    int num;
    int i;
    for(i=0;i<MAX;i++)
    {
        x[i]=rand();
    }
    num=sizeof(x)/sizeof(x[0]);
    shell(x,num); //Call bubblesort function
    printf("The sorted list is:\n");
    for(i=0;i<num;i++)
    {
        printf("%lf\n",x[i]);
    }
    return 0;
}

void shell(double x[], int n)
{
    int i,k;
    double temp;
    for(i=0;i<n-1;i++)
    {
        for(k=0;k<n-1;k++)
        {
            if(x[k]>x[k+1])
            {
                temp=x[k];
                x[k]=x[k+1];
                x[k+1]=temp;
            }
        }
    }
}