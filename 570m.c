#include<stdio.h>
int main()
{
    int n,p;
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
        p=n%10;
        sum+=p;
        n=n/10;
    }
    printf("%d",sum);

}
