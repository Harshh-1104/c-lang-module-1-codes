#include<stdio.h>
#include<conio.h>

void main()

{

    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0 && year%100 != 0 && year%400 == 0)

    {
        printf("\ngiven year is leap year");
    }

    else
    {
        printf("\ngiven year is not a leap year");
    }

    getch();
}