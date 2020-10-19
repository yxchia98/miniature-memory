/* y=mx+c*/
#include<stdio.h>
#include<math.h>

float pointx1, pointx2, pointy1, pointy2, constant, gradient, xpoint, ypoint, slope, yintercept;
int choice;
int x=0;

void find_gradient();
void find_constant();
void find_slope();
void find_yintercept(float xiszero);
void find_ypoint();
void exitApp();

int main(){
    printf("\nEnter coordinates for x1:");
    scanf("%f", &pointx1);
    printf("\nEnter coordinates for y1:");
    scanf("%f", &pointy1);
    printf("\nEnter coordinates for x2:");
    scanf("%f", &pointx2);
    printf("\nEnter coordinates for y2:");
    scanf("%f", &pointy2);
    find_gradient();
    find_constant();
    printf("\nFormula: y=%.2fx+%.2f", gradient, constant);
    while (x==0)
    {
        printf("\n1. Find slope\n2. Find y-intercept\n3. Find y\n4. Exit application\nEnter selection:");
        scanf("%d", &choice);
        printf("Chosen %d\n", choice);
        if(choice==1){
            find_slope();
        }
        else if(choice==2){
            find_yintercept(0);
        }
        else if(choice==3){
            find_ypoint();
        }
        else if(choice==4){
            printf("Exiting App");
            exitApp();
        }
    }
    
    return 0;
}
void find_gradient(){
gradient=(pointy2-pointy1)/(pointx2-pointx1);
}
void find_constant(){
constant=pointy1-(gradient*pointx1);
}
void find_slope(){
slope=sqrt(pow((pointx2-pointx1),2)+pow((pointy2-pointy1),2));
printf("Length of slope is %.2f", slope);
}
void find_yintercept(float xiszero){
yintercept=gradient*xiszero+constant;
printf("The y-intercept is: %.2f", yintercept);
}
void find_ypoint(){
    printf("\nTo find y, enter x coordinate:");
    scanf("%f",&xpoint);
    ypoint=gradient*xpoint+constant;
    printf("Point of y is: %.2f, cooridnates are(%.2f,%.2f)", ypoint, xpoint, ypoint);
}
void exitApp(){
    x=1;
}