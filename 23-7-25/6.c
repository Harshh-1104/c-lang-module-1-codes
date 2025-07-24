#include<stdio.h>
#include<conio.h>

void main()

{
    int money;
    float per;
    int year;
    float intrest;
    
    
    printf("Enter money Amount: ");
    scanf("%d",&money);
    
    printf("Enter percentage:");
    scanf("%f",&per);
    
    printf("Enter Year:");
    scanf("%d",&year);
    
    
    intrest = money*per*year/100;

    float totalamount = money+intrest;

    printf("\n Your Intrest amount is %f",intrest);
    
    printf("\n Your Total amount is %f",totalamount);
    
   
    getch();
}