#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c=21;
printf("the total amount of Matchsticks is 21");
while(c>1)
{
printf("\n Enter your choice:");
scanf("%d",&a);
if((1<=a)&&(a<=4))
{
c=c-a;
printf("\n The user choice %d ,the matchsticks left %d",a,c);
}
else
{
printf("\n Wrong Entry");
break;
}
b=5-a;
c=c-b;
printf("\n The computer choice is %d ,the matchsticks left %d",b,c);
}
if(c==1)
{
printf("\n Last match stick left,you lose");
}
getch();
}