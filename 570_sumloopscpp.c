#include<stdio.h>
int last_digit(int n)
{

    return n%10;
   // printf("The last digit of the given number is: %d\n",n%10);
}
int first_digit(int n)
{
    int r;
    while(n>0)
    {
        r =n%10;
        n=n/10;
    }
    return r;
    //printf("The first digit in the given number is: %d",r);
}
int main()
{
    int n;
    scanf("%d",&n);
    int c=first_digit(n);
    int d=last_digit(n);
    printf("The sum of the first and last digit is: %d",c+d);
}
