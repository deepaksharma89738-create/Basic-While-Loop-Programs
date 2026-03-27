// Program to check if the entered number is an Armstrong number.
#include<stdio.h>
#include<math.h>

int main()
{
    int n, sum = 0, temp, digit;
    printf("Enter a number\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }
    if (temp == sum)
        printf("The entered number is an Armstrong number.\n");
    else
        printf("The entered number is not an Armstrong number.\n");
    return 0;
}