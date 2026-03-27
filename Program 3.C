// Program to reverse the entered number.
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("Reverse of the entered number is %d\n",rev);
    return 0;
}