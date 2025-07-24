#include<stdio.h>
#include<conio.h>

void main()

{

    float pi,r,A;

    pi=3.14;

    printf("enter value of radius : ");
    scanf("%f",&r);

    A= pi*r*r;
    
    printf("\n area of circle is : %f",A);


    getch();
    
}