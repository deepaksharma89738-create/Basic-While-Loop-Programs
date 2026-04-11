// Write the program to print the following pattern:
// 1******
// 12*****
// 123****
// 1234***
// 12345**
// 123456*
// 1234567

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(j=1;j<=7-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Write a program that returns the number of times digit is found in the given number.
#include<stdio.h>
int main()
{
    int num,digit,count=0,temp;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter a digit to search\n");
    scanf("%d",&digit);
    temp=num;
    while(temp>0){
        if(temp%10==digit){
            count++;
        }
        temp=temp/10;
    }
    printf("The digit %d is found %d times in the number %d",digit,count,num);
    return 0;
}