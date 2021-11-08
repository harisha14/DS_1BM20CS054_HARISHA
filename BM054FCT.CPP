#include<stdio.h>
#include<conio.h>
long int fact(int n)
{
if(n>=1)
{
    if(n>1)
    printf("%d*",n);
    else
    printf("1");
    return n*fact(n-1);
    
}

else
return 1;
}
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
printf(" Factorial of %d = %ld",n,fact(n));
return 0;

}
