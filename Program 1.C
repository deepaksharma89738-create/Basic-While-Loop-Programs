// Program to count the number of digits in entered number.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count++;
    }
    printf("Number of digits in the entered number is %d\n",count);
    return 0;
}