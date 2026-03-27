// Program to sum of digits in the entered number.
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    printf("Sum of digits in the entered number is %d\n",sum);
    return 0;
}