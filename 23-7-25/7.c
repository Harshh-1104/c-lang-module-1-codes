#include<stdio.h>
#include<conio.h>

void main()

{

    float a,b,c,d,e,T,P;

    printf("marks of maths : ");
    scanf("%f",&a);

    printf("marks of history : ");
    scanf("%f",&b);

    printf("marks of english : ");
    scanf("%f",&c);

    printf("marks of compt : ");
    scanf("%f",&d);

    printf("marks of biology : ");
    scanf("%f",&e);


    T=a+b+c+d+e;

    printf("\ntotal marks obtained : %f ",T);

    P=T/5;

    printf("\nyour percentage is: %f ",P);

    getch();


}

