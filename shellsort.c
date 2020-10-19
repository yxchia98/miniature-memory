#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10
#define TRUE 1
#define FALSE 0

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
    shell(x,num); //Call shellsort function
    printf("The sorted list is:\n");
    for(i=0;i<num;i++)
    {
        printf("%lf\n",x[i]);
    }
    return 0;
}

void shell(double x[], int n)
{
    int i;                  //loop counter
    double temp;            //temp storage
    int last;               //last element in unsorted list
    int is_sorted;          //indicator to indicate if array is sorted
    int jump=n/2;           //distance over which to compare
    
    while(jump>=1)
    {
        last=n-jump;
        is_sorted=FALSE;
        while(!is_sorted)
        {
            is_sorted=TRUE;                 //initialize flag
            for(i=0;i<last;i++){
                if(x[i]>=x[i+jump])
                {
                    temp=x[i];
                    x[i]=x[i+jump];
                    x[i+jump]=temp;
                    is_sorted=FALSE;        //reset flag
                }
            }
        }
        jump=jump/2;
    }
}