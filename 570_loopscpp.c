#include<stdio.h>
void last_digit(int n)
{
    printf("The last digit of the given number is: %d\n",n%10);
}
void first_digit(int n)
{
    int r;
    while(n>0)
    {
        r =n%10;
        n=n/10;
    }
    printf("The first digit in the given number is: %d",r);
}
int main()
{
    int n;
    scanf("%d",&n);
    first_digit(n);
    last_digit(n);
}
