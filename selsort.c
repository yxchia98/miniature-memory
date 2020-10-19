#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10

void selection(double x[],int n);
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
    selection(x,num); //Call selectionsort function
    printf("The sorted list is:\n");
    for(i=0;i<num;i++)
    {
        printf("%lf\n",x[i]);
    }
    return 0;
}

void selection(double x[], int n)
{
    int pass; //position number of the array
    int i=0; //loop counter
    int imin; //position of the smallest element
    double min; //minimum value
    double temp; //temporary storage
    for(pass=0;pass<n-1;pass++) //n-1 because dont need check for last number, since the biggest will already be there.
    {
        min=x[pass];
        imin=i;
        for(i=pass+1;i<n;i++)
        {
            if(x[i]<min)
            {
                min=x[i];
                imin=i;
            }
        }
        temp=x[pass];
        x[pass]=min;
        x[imin]=temp;
    }
}