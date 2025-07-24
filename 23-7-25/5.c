#include<stdio.h>
#include<conio.h>

void main()

{

    float b,h,T;

    printf("enter value of base length : ");
    scanf("%f",&b);

    printf("enter value of height length : ");
    scanf("%f",&h);


    T=b*h/2;

    printf("\n area of triangle is : %f",T);

    getch();

}