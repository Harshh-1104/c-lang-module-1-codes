#include<stdio.h>
#include<conio.h>
void main()
{
   int num,i,ans=1;
   
   printf("Enter Any Number: ");
   scanf("%d",&num);

    i=num;

   while(i>0)
   
   {
       ans = ans * i ;
       i--;
   }
   printf("\n facto : %d ", ans);
   
    
    getch();
}