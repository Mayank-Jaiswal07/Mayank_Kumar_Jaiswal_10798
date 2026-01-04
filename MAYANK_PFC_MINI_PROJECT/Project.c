#include <stdio.h>

void printNumbers(int n)
{
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void printEven(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
}

void printOdd(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");
}

void checkArmstrong()
{
    int num, original, digit, sum = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }

    if(sum == original)
        printf("It is an Armstrong number.\n");
    else
        printf("It is not an Armstrong number.\n");
}

int main()
{
    int choice, n;

    printf("MENU\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("4. Check Armstrong number (3-digit)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter N: ");
            scanf("%d", &n);
            printNumbers(n);
            break;

        case 2:
            printf("Enter N: ");
            scanf("%d", &n);
            printEven(n);
            break;

        case 3:
            printf("Enter N: ");
            scanf("%d", &n);
            printOdd(n);
            break;

        case 4:
            checkArmstrong();
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
