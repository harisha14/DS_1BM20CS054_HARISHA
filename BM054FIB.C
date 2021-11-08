#include<stdio.h>
#include<conio.h>
int fib(int n)
{
if(n<=1)
return n;
return fib(n-1)+fib(n-2);
}
int main()
{
int n;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
printf("The fibonacci series is: %d",fib(n));
getch();
return 0;
}
