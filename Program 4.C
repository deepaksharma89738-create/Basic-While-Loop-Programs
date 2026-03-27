// Program to check if the entered number is a palindrome.
#include<stdio.h>
int main()
{
    int n,rev=0,temp;
    printf("Enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(temp==rev)
        printf("The entered number is a palindrome.\n");
    else
        printf("The entered number is not a palindrome.\n");
    return 0;
}